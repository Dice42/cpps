/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:03:11 by mohammoh          #+#    #+#             */
/*   Updated: 2024/10/04 21:04:12 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stdexcept>
#include <sstream>
#include <stack>

class RPN
{
	private:
		bool	_isOperator(char token);
		int 	_evaluate(int a, int b, char op);
	
	protected:
		class DivisionByZeroException : public std::exception {
			public:
				const char* what() const throw();
		};
		class InvalidOperatorException : public std::exception {
			public:
				const char* what() const throw();
		};
		class InvalidExpressionException : public std::exception {
			public:
				const char* what() const throw();
		};
		class NotEnoughOperandsException : public std::exception {
			public:
				const char* what() const throw();
		};
		class InvalidTokenException : public std::exception {
			public:
				const char* what() const throw();
		};

	public:
		~RPN();
		RPN();
		RPN(const RPN& other);
		RPN&	operator=(const RPN& rhs);
		
		/*member function*/
		int evalRPN(const std::string& expression);
};
#endif
