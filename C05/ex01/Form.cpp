/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:13:19 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/13 12:49:13 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
:_name("no name"), _isSigned(false),
	_gradeToSign(0), _gradeToExecute(0)
{}

Form::Form(const std::string name, const int gradeToSign,
				const int gradeToExecute)
			:_name(name), _isSigned(false),
			_gradeToSign(gradeToSign),
			_gradeToExecute(gradeToExecute)
{}

Form::Form(const Form& other) : _gradeToSign(other.getGradeToSign()), _gradeToExecute(other.getGradeToExecute())
{
	*this = other;
}

Form&	Form::operator=(const Form& rhs)
{
	if (this != &rhs)
		_isSigned = rhs.getIsSigned();
	return (*this);	
}

/*member functions*/
void				Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > getGradeToSign())
		throw GradeTooLowException();
	_isSigned = true;
}

/*exception overloading*/
const char* 	Form::GradeTooHighException::what() const throw() { return "Grade Too High!";}
const char* 	Form::GradeTooLowException::what() const throw() { return "Grade Too Low";}


/*getters*/
std::string	Form::getName() const { return _name;}
bool		Form::getIsSigned() const { return _isSigned;}
int			Form::getGradeToSign() const { return _gradeToSign;}
int			Form::getGradeToExecute() const { return _gradeToExecute;}

/* insertion overload*/
std::ostream&	operator<<(std::ostream& os, Form& form)
{
	std::string	str[4];

	str[0] =  "Name"; str[1] = "Grade2sign"; str[2] = "Grade2Exec"; str[3] = "isSgned"; 
	os <<  "---------------------------------------------\n|";
	for (int i = 0; i < 4; i++)
		os << BLUE << std::setw(10)  << str[i] << RESET << "|";
	os << std::endl;
	os << "---------------------------------------------" << std::endl;

	os << "|" << std::setw(10) << form.getName() << '|';
	os << std::setw(10) << form.getGradeToSign() << '|';
	os << std::setw(10) << form.getGradeToExecute() << '|';
	os << ((form.getIsSigned() < 1) ? RED : GREEN) << std::setw(10) 
		<< ((form.getIsSigned() < 1) ? "Not Sigend" : "Signed") << RESET << '|';
	os << std::endl;

	os << "---------------------------------------------" << std::endl;
	return (os);
}

Form::~Form() {}