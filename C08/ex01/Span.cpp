/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:18:33 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/26 21:48:04 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::~Span(void){}
Span::Span(void): _N(0){}
Span::Span(unsigned int N) : _N(N) {}
Span::Span(const Span& other){*this = other;}
Span&	Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		_vec = rhs._vec;
		_N = rhs._N;
	}
	return *this;
}

void	Span::addNumber(int number)
{
	if (_vec.size() == _N)
		throw TooManyElementsException();
	else
		_vec.push_back(number);
}

/**
 * @brief this function find the shortest span by
 * first sorting the array 
 * creating a new array using the size of the array then 
 * it store the difference in the new created array by computing 
 * the difference between consecutive elements of the sorted array
 * using the adjacent_difference
 * @return the smallest differnec between the elements 
 */
int		Span::shortestSpan(void)
{   
	 if (_vec.size() < 2)
        throw NotEnoughElementsException();

    std::sort(_vec.begin(), _vec.end());

    std::vector<int> diffs(_vec.size());
    std::adjacent_difference(_vec.begin(), _vec.end(), diffs.begin());
	int min_diff = *std::min_element(diffs.begin() + 1, diffs.end());
	
    return (min_diff);
}

int		Span::longestSpan(void)
{
	if (_vec.size() < 2)
        throw NotEnoughElementsException();
	int min = *std::min_element(_vec.begin(), _vec.end());
    int max = *std::max_element(_vec.begin(), _vec.end());
	
	return(max - min);
}
