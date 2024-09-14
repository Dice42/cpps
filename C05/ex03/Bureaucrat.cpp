/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ++4 <mohammoh@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:32:58 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/14 10:58:18 by ++4              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::~Bureaucrat(){}
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

const char* 	Bureaucrat::GradeTooHighException::what() const throw(){return ("Grade Too High!");}

const char* 	Bureaucrat::GradeTooLowException::what() const throw(){return ("Grade Too Low!");}

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

void	Bureaucrat::signForm(AForm &form)
{
	try{
		form.beSigned(*this);
		std::cout << _name << GREEN << " signed " << RESET << form.getName() << std::endl;
	}catch(std::exception &e){
		  std::cout << _name << " couldn’t sign " << form.getName() << " Form because "
					<< YELLOW << e.what() << RESET << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
    try {
        form.execute(*this);
        std::cout << _name << GREEN << " executed " << RESET << form.getName() << std::endl;
    }catch(std::exception &e){
        std::cout << _name << " couldn’t execute " << form.getName() << " Form because "
					<< YELLOW << e.what() << RESET << std::endl;
    }
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat& my)
{
    os << my.getName() << ",  bureaucrat grade " << my.getGrade();
    return (os);
}
