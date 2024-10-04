/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:21:23 by mohammoh          #+#    #+#             */
/*   Updated: 2024/10/04 21:02:57 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*OCF*/
RPN::~RPN(){}
RPN::RPN(){}
RPN::RPN(const RPN& other){*this = other;}
RPN&	RPN::operator=(const RPN& rhs){(void)rhs; return *this;}

/*exceptions*/
const char* 	RPN::InvalidOperatorException::what() const throw() {return ("Invalid Operator!");}
const char* 	RPN::DivisionByZeroException::what() const throw() {return ("Division By Zero!");}
const char* 	RPN::InvalidExpressionException::what() const throw() {return ("Invalid Expression!");}
const char* 	RPN::NotEnoughOperandsException::what() const throw() {return ("Not Enough Operands!");}
const char* 	RPN::InvalidTokenException::what() const throw() {return ("Invalid Token!");}

bool	RPN::_isOperator(char token)
{
	return token == '+' || token == '-' || token == '*' || token == '/';
}

int 	RPN::_evaluate(int a, int b, char op)
{
	switch (op)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b == 0)
                throw DivisionByZeroException();
            return a / b;
        default:
            throw InvalidOperatorException();
    }
}

int RPN::evalRPN(const std::string& expression)
{
    std::stack<int> stack;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token)
    {
        if (token.size() == 1 && _isOperator(token[0]))
        {
            if (stack.size() < 2)
                throw NotEnoughOperandsException();

            int b = stack.top(); stack.pop();
            int a = stack.top(); stack.pop();
            int result = _evaluate(a, b, token[0]);
            stack.push(result);
        }
        else
        {
            if (token.size() != 1 || !isdigit(token[0]))
                throw InvalidTokenException();
            stack.push(token[0] - '0');
        }
    }

    if (stack.size() != 1)
        throw InvalidExpressionException();

    return stack.top();
}
