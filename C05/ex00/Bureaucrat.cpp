/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ++4 <mohammoh@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:32:58 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/09 11:51:11 by ++4              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int id) : _name(name)
{
    try
    {
        if (grade < 1)
            throw GradeTooHighException;
        if (grade > 150)
            throw GradeTooLowException;
        _grade = grade;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    if (id < 1 && id > 150)
}
int      			Bureaucrat::getGrade(void) {return _grade;};
std::string	const	Bureaucrat::getName(void) {return _name;};

void	Bureaucrat::GradeTooHighException()
{
	
};
void	Bureaucrat::GradeTooLowException()
{
	
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat& my)
{
    os << my.getName() << ",  bureaucrat grade " << my.getGrade();
    return (os);
}