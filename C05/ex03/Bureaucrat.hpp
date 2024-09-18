/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:17:44 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/14 17:15:02 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class AForm;
class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	
	protected:
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException	: public std::exception {
			public:
				const char* what() const throw();
		};

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& rhs);
		~Bureaucrat(void);
	
		void				decrementGrade();
		void				incrementGrade();
		int					getGrade(void) const ;
		const std::string	getName(void) const ;
		
		void				signForm(AForm & form);
		void				executeForm(AForm const & form);
		
};
#endif

/* overload insertion operator */
std::ostream&	operator<<(std::ostream& os, Bureaucrat& my);
