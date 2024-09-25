/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:33:53 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/25 21:34:30 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

#define RESET		"\033[0m"
#define GREEN  		"\033[32m"

class Span
{
	private:
		unsigned int			_N;
		std::vector<int>		_vec;
	
	protected:
		class TooManyElements : public std::exception{
			public:
				const char* what() const throw() {return ("Too Many Elements!");};				
		};

	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span& other);
		Span& operator=(const Span& rhs);

		
		void	addNumber(); //add a single number to the Span if N element stored should throw an exception
		void	shortestSpan(); //find the shortest span between all the number stored
		void	longestSpan(); //find the longest span between all the number stored
		/*f there are no numbers stored,
			or only one, no span can be found. Thus, throw an exception.*/
};			
#endif