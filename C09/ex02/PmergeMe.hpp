/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:03:34 by mohammoh          #+#    #+#             */
/*   Updated: 2024/10/09 18:22:30 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <list>
#include <cstdlib>
#include <stdexcept>
#include <ctime>


class PmergeMe
{
	protected:
		class InvalidInputException : public std::exception {
			public:
				const char* what() const throw();
		};

	private:
		std::deque<int>	dequeContainer;
		std::list<int> listContainer;

		bool 	isValidInput(int ac, char **av);
		
		void	fordJohnsonSort(std::deque<int>& container);
		void	fordJohnsonSort(std::list<int>& container);
		
		int 	jacobsthal(int n);
		std::deque<int> buildJacobsthalSequence(int n);		
		
		template <typename Container> Container		insertSmallerElements(Container& sorted, Container smaller);
		template <typename Container> double		measureTime(Container& container);
		template <typename Container> void			printContainer(Container& container);
		template <typename Container>
		std::deque<std::pair<int, int> >			createPairs(Container container);
		
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe rhs);

		void displayResults(void);
		void initialize(int ac, char **av);
};

#endif