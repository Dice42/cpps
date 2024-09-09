/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:32:58 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/09 16:30:55 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "bureaucrat constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    try
    {
        if (grade < 1)
            throw GradeTooLowException;
        if (grade > 150)
            throw GradeTooLowException;
        _grade = grade;
    }
    catch(GradeTooHighException)
    {
        std::cerr << GradeTooHighException::what() << '\n';
    }
    catch (GradeTooLowException)
    {
        std::cerr << GradeTooLowException::what() << '\n'; 
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    _name = other._name;
    _grade = other._grade;
}

Bureaucrat&     Bureaucrat::operator=(const Bureaucrat& rhs)
{
    if (this != &rhs)
    {
        _grade = rhs._grade;
        _name = rhs._name;
    }
    return (*this);
}

const char* 	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHigh!");
}

const char* 	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLow!");
}

int      			Bureaucrat::getGrade(void) {return _grade;};
std::string	const	Bureaucrat::getName(void) {return _name;};

void	Bureaucrat::incrementGrade()
{
	if (_grade < 1)
		throw 3;
	_grade++;
};

void	Bureaucrat::decrementGrade()
{
	if (_grade > 150)
		throw 4;
	_grade--;
};


Bureaucrat::~Bureaucrat()
{
	std::cout << "bureaucrat destructor is called" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat& my)
{
    os << my.getName() << ",  bureaucrat grade " << my.getGrade();
    return (os);
}
