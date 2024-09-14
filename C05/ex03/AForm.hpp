/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ++4 <mohammoh@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:52:56 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/14 10:54:06 by ++4              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef AFORM_HPP
 #define AFORM_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "Bureaucrat.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define LCYAN	"\033[96m"

class Bureaucrat;

class AForm
 {
	private:
		const std::string		_name;
		bool					_isSigned;
		const int				_gradeToSign;
		const int				_gradeToExecute;

	protected:
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		class FormNotSignedException : public std::exception {
			public:
				const char* what() const throw();
		};
	public:
		AForm();
		AForm(std::string name, const int gradeToSign, const int gradeToExecute);
		AForm(const AForm& other);
		AForm&	operator=(const AForm& rhs);
		~AForm();

		/* getters */
		std::string		getName() const;
		bool			getIsSigned() const;
		int				getGradeToSign() const;
		int				getGradeToExecute() const;

		/* member function */
		void				beSigned(Bureaucrat const & bureaucrat);
		void				beExecute(Bureaucrat const & bureaucrat) const;
		virtual void		execute(Bureaucrat const & executor) const = 0;
	
 };
 
 #endif

std::ostream&	operator<<(std::ostream& os, AForm& form);
