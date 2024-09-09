/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ++4 <mohammoh@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:17:44 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/09 12:23:06 by ++4              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	
	protected:
		class GradeTooHighException : std::exception {
			public:
				const char *what() const throw();
		}
		class GradeTooLowException	: std::exception {
			public:
				const char* what() const throw();
		}
	
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		
		void				GradeTooHighException();
		void				GradeTooLowException();
		const int			getGrade(void);
		const std::string	getName(void);
		
};
#endif

/* overload insertion operator */
std::ostream&	operator<<(std::ostream& os, Bureaucrat& my);
