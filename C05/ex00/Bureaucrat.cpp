/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:32:58 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/08 09:43:33 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	const 			Bureaucrat::getGrade(void) {return _grade;};
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