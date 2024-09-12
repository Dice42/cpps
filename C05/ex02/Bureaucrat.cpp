/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:32:58 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/12 10:36:16 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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
    {
        _grade = rhs._grade;
    }
    return (*this);
}

const char* 	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High!");
}

const char* 	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low!");
}

int      			Bureaucrat::getGrade(void) const {return _grade;};
std::string	const	Bureaucrat::getName(void) const {return _name;};

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
};

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
};

void	Bureaucrat::executeForm(AForm const & form)
{
    if (_grade <= form.getGradeToExecute())
        std::cout << _name << " executed " << form.getName() << std::endl;
    else
        //  std::cout << "ERROR: "<< _name << "Not allowed to exeute " << form.getName() << std::endl;
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "bureaucrat destructor is called" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat& my)
{
    os << my.getName() << ",  bureaucrat grade " << my.getGrade();
    return (os);
}
