/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:33:53 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/26 19:57:27 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#define RESET		"\033[0m"
#define GREEN  		"\033[32m"

class Span
{
	private:
		unsigned int			_N;
		std::vector<int>		_vec;
	
	protected:
		class TooManyElementsException : public std::exception{
			public:
				const char* what() const throw() {return ("Too Many Elements!");};				
		};
		class NotEnoughElementsException : public std::exception{
			public:
				const char* what() const throw() {return ("Not Enough Elements!");};				
		};
	
	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span& other);
		Span& operator=(const Span& rhs);
		
		
		void	addNumber(int number); //add a single number to the Span if N element stored should throw an exception
		int		shortestSpan(); //find the shortest span between all the number stored
		int		longestSpan(); //find the longest span between all the number stored

		/**
		 * @brief this function checks the size of the vector and compare it to 
		 * the size of the new iterator if its the size of the two iterators begger than
		 * the vector size itll throw an error else
		 * itll uses insert to the element to the vectors
		 * so biascally what insert does is resizeing the vector space and then copying the elements
		 * thats why we have to add a check to not add more than the vector size otherwize itll just add it
		 * @tparam itr 
		 * @param begin 
		 * @param end 
		 */
		template<typename itr>
		void	addRange(itr begin, itr end)
		{
			if (_vec.size() + std::distance(begin, end) > _N)
				throw TooManyElementsException();
			_vec.insert(_vec.end(), begin, end); 
		}

		std::vector<int>& 	getVec() 
    	{
			return _vec;
   		}
};		

#endif