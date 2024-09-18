/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:52:56 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/14 20:26:56 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef FORM_HPP
 #define FORM_HPP

#include <iostream>
#include <iomanip>

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

class Form
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
	public:
		Form();
		Form(std::string name, const int gradeToSign, const int gradeToExecute);
		Form(const Form& other);
		Form&	operator=(const Form& rhs);
		~Form();

		/*getters*/
		 std::string	getName() const;
		bool			getIsSigned() const;
		 int			getGradeToSign() const;
		 int			getGradeToExecute() const;

	/* this function changes the form status to signed if the bureaucrat's grade is high enough or higher or equal to the required one
		if a grade is to low throw gradetoolowexception*/
		void				beSigned(Bureaucrat& bureaucrat);
		
 };
 
 #endif

std::ostream&	operator<<(std::ostream& os, Form& form);
