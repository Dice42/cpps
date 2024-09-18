/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:25:25 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/14 16:55:03 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(const Intern&  other){*this = other;}
Intern& Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

AForm*  Intern::createRobotomyRequestForm(std::string targetName)
{
	return(new RobotomyRequestForm(targetName));
}

AForm*  Intern::createShrubberyCreationForm(std::string targetName)
{
	return(new ShrubberyCreationForm(targetName));
}

AForm*  Intern::createPresidentialPardonForm(std::string targetName)
{
	return(new PresidentialPardonForm(targetName));
}

const char*  Intern::FormDoesntExsitsException::what() const throw()
{
	return "Form doesnt Exists";
}

AForm*    Intern::makeForm(std::string formName, std::string targetName)
{
	AForm *temp;
	std::string arr[] = {"robotomy Request", "shrubbery creation", "presidential pardon", formName};
	
	int i = 0;
	while (i < 4 && arr[i].compare(formName.c_str()) != 0)
		i++;
	switch(i)
	{
		case 0: temp = createRobotomyRequestForm(targetName);
			break;
		case 1: temp = createShrubberyCreationForm(targetName);
			break;
		case 2: temp = createPresidentialPardonForm(targetName);
			break;
		case 3:
			throw FormDoesntExsitsException();
	}
	std::cout << "Intern creates " << formName << std::endl;
	return(temp);
}
