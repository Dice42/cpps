/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:05:53 by mohammoh          #+#    #+#             */
/*   Updated: 2024/10/09 19:25:59 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe& other) {*this = other;}
PmergeMe& PmergeMe::operator=(const PmergeMe rhs)
{
	this->dequeContainer = rhs.dequeContainer;
	this->listContainer = rhs.listContainer;
	return (*this);
}

void	PmergeMe::initialize(int ac, char **av)
{
	if (!isValidInput(ac, av))
		throw InvalidInputException();
	for (int i = 1; i < ac; i++)
	{
		int value = std::atoi(av[i]);
		dequeContainer.push_back(value);
		listContainer.push_back(value);
	}
}

bool 	PmergeMe::isValidInput(int ac, char **av)
{
	if (ac < 2)
		return false;
	for (int i = 1; i < ac; i++)
	{
		for (char *ch = av[i]; *ch != '\0'; ++ch)
		{
			if (!isdigit(*ch))
				return false;
		}
		int value = std::atoi(av[i]);
		if (value < 0)
			return false;
	}
	return true;
 }

template <typename Container>
double PmergeMe::measureTime(Container& container)
{
	clock_t start = clock();
	fordJohnsonSort(container);
	clock_t end = clock();
	return (static_cast<double>(end - start) / (CLOCKS_PER_SEC / 1000000));
}

template <typename Container>
void PmergeMe::printContainer(Container& container)
{
	typename Container::iterator it;
	for (it = container.begin(); it != container.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template <typename Container>
std::deque<std::pair<int, int> >	PmergeMe::createPairs(Container container)
{
	std::deque<std::pair<int, int> > pairs;
	typename Container::iterator it = container.begin();
	while (it != container.end())
	{
		int first = *it++;
		if (it != container.end())
		{
			int second = *it++;
			pairs.push_back(std::make_pair(first, second));
		}
		else
			pairs.push_back(std::make_pair(first, -1));
	}
	return pairs;
}

void PmergeMe::fordJohnsonSort(std::deque<int>& container) {
	
	if (container.size() <= 1)
		return ;
	std::deque<std::pair<int, int> > pairs  = createPairs(container);
	for (size_t i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].second != -1 && pairs[i].first < pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
	}

	std::deque<int> largerElements;
	std::deque<int> smallerElements;
	for (size_t i =0; i < pairs.size(); i++)
	{
		if (pairs[i].second != -1)
		{
			largerElements.push_back(pairs[i].second);
			smallerElements.push_back(pairs[i].first);
		}
		else
			largerElements.push_back(pairs[i].first);
	}
	fordJohnsonSort(largerElements);
	
	container = insertSmallerElements(largerElements, smallerElements);
}


template <typename Container>
Container 		PmergeMe::insertSmallerElements(Container& sorted, Container smaller)
{
	Container result = sorted;
	if (smaller.empty())
		return result;
	typename Container::iterator smaller_itr = smaller.begin();
    typename Container::iterator insertPos = std::lower_bound(result.begin(), result.end(), *smaller_itr);
	result.insert(insertPos, *smaller_itr);
    smaller.erase(smaller_itr);

    std::deque<int> jacobsthalSequence = buildJacobsthalSequence(smaller.size());
	for (size_t i = 0; i < jacobsthalSequence.size(); i++)
	{
		if (static_cast<size_t>(jacobsthalSequence[i]) >= smaller.size())
			break;
        typename Container::iterator it = smaller.begin();
		std::advance(it, jacobsthalSequence[i]);
        insertPos = std::lower_bound(result.begin(), result.end(), *it);
        result.insert(insertPos, *it);
        smaller.erase(it);
	}
	for (typename Container::iterator it = smaller.begin(); it != smaller.end();)
    {
        insertPos = std::lower_bound(result.begin(), result.end(), *it);
        result.insert(insertPos, *it);
        it = smaller.erase(it);
    }
	return result;
}

void	PmergeMe::fordJohnsonSort(std::list<int>& container)
{
	if (container.size() <= 1)
		return ;
	std::deque<std::pair<int, int> > pairs  = createPairs(container);
	for (size_t i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].second != -1 && pairs[i].first < pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
	}
	std::list<int> largerElements;
	std::list<int> smallerElements;
	for (size_t i =0; i < pairs.size(); i++)
	{
		if (pairs[i].second != -1)
		{
			largerElements.push_back(pairs[i].second);
			smallerElements.push_back(pairs[i].first);
		}
		else
			largerElements.push_back(pairs[i].first);
	}
	fordJohnsonSort(largerElements);
	container = insertSmallerElements(largerElements, smallerElements);
}

void	PmergeMe::displayResults(void)
{
	std::cout << "Before: ";
	printContainer(dequeContainer);
	
	double dequeTime = measureTime(dequeContainer);
	double listTime = measureTime(listContainer);

	std::cout << "After: ";
	printContainer(dequeContainer);
	std::cout << "Time to process a range of " << dequeContainer.size() 
			<< " elements with std::deque: " << dequeTime << " us" << std::endl;
	std::cout << "Time to process a range of " << listContainer.size() 
			<< " elements with std::list: "  << listTime << " us" << std::endl;
}

int	PmergeMe::jacobsthal(int n)
{
    if (n == 0)
		return 0;
    if (n == 1)
		return 1;
    return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

std::deque<int> PmergeMe::buildJacobsthalSequence(int n)
{
    std::deque<int> sequence;
    int i = 0;
    while (jacobsthal(i) < n)
	{
        sequence.push_back(jacobsthal(i));
        ++i;
    }
    return sequence;
}

const char* 	PmergeMe::InvalidInputException::what() const throw() {return ("Invalid Input!");}