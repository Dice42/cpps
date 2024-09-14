le/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ++4 <mohammoh@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:32:58 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/14 10:59:20 by ++4              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat() : _name("no name"), _grade(1)
{
	std::cout << "bureaucrat constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw GradeTooLowException();
    if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    *this = other;
}

Bureaucrat&     Bureaucrat::operator=(const Bureaucrat&  rhs)
{
    if (this != &rhs)
        _grade = rhs._grade;
    return (*this);
}

const char* 	    Bureaucrat::GradeTooHighException::what() const throw(){return ("Grade Too High!");}
const char* 	    Bureaucrat::GradeTooLowException::what() const throw(){return ("Grade Too Low!");}

int      			Bureaucrat::getGrade(void) {return _grade;};
std::string	const	Bureaucrat::getName(void) {return _name;};

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();;
	_grade--;
};

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();;
	_grade++;
};

void	Bureaucrat::signForm(Form &form)
{
	try{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}catch(std::exception &e){
		  std::cout << _name << " couldn’t sign " << form.getName() << " Form because "
					<< YELLOW << e.what() << RESET << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "bureaucrat destructor is called" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ",  bureaucrat grade " << bureaucrat.getGrade();
    return (os);
}
