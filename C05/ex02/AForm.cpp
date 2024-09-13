/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:13:19 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/13 21:37:52 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
:_name("no name"), _isSigned(false),
	_gradeToSign(0), _gradeToExecute(0)
{}

AForm::AForm(const std::string name, const int gradeToSign,
				const int gradeToExecute)
			:_name(name), _isSigned(false),
			_gradeToSign(gradeToSign),
			_gradeToExecute(gradeToExecute)
{}

AForm::AForm(const AForm& other) : _gradeToSign(other.getGradeToSign()), _gradeToExecute(other.getGradeToExecute())
{
	*this = other;
}

AForm&	AForm::operator=(const AForm& rhs)
{
	if (this != &rhs)
		_isSigned = rhs.getIsSigned();
	return (*this);	
}

/*member functions*/
void		AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > getGradeToSign())
		throw GradeTooLowException();
	_isSigned = true;
}

void		AForm::beExecute(Bureaucrat const & bureaucrat) const
{
	if (getIsSigned() == false)
		throw FormNotSignedException();
	if ((bureaucrat.getGrade() > getGradeToExecute()))
		throw GradeTooLowException();
}

/*exception overloading*/
const char* 	AForm::GradeTooHighException::what() const throw() { return "Grade Too High!";}
const char* 	AForm::GradeTooLowException::what() const throw() { return "Grade Too Low";}
const char* 	AForm::FormNotSignedException::what() const throw() { return "Form Not Signed";}


/*getters*/
std::string	AForm::getName() const { return _name;}
bool		AForm::getIsSigned() const { return _isSigned;}
int			AForm::getGradeToSign() const { return _gradeToSign;}
int			AForm::getGradeToExecute() const { return _gradeToExecute;}

/* insertion overload*/
std::ostream&	operator<<(std::ostream& os, AForm& Aform)
{
	std::string	str[4];

	str[0] =  "Name"; str[1] = "Grade2sign"; str[2] = "Grade2Exec"; str[3] = "isSgned"; 
	os <<  "╔═══════════════════════════════════════════════════════╗\n║";
	for (int i = 0; i < 4; i++)
		os << BLUE << (i == 0 ? std::setw(22) : std::setw(10))  << str[i] << RESET << "║";
		os << "\n╚═══════════════════════════════════════════════════════╝\n";
	os << "║" << std::setw(21) << Aform.getName() << "║";
	os << std::setw(10) << Aform.getGradeToSign() << "║";
	os << std::setw(10) << Aform.getGradeToExecute() << "║";
	os << ((Aform.getIsSigned() < 1) ? RED : GREEN) << std::setw(10) 
		<< ((Aform.getIsSigned() < 1) ? "Not Sigend" : "Signed") << RESET << "║";
	os << std::endl;

	os << "╚═══════════════════════════════════════════════════════╝" << std::endl;
	return (os);
}
AForm::~AForm() {}