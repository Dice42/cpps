/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:17:44 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/08 10:55:36 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
class Bureaucrat
{
	protected:
		const std::string	_name;
		const int			_grade;

	public:
		void				GradeTooHighException();
		void				GradeTooLowException();
		const int			getGrade(void);
		const std::string	getName(void);
		
};
#endif
/* overload insertion operator */
std::ostream&	operator<<(std::ostream& os, Bureaucrat& my);
