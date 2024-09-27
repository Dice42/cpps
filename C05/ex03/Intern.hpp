/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:50:48 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/14 16:50:48 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>

class AForm;
class Intern
{
    private:
        AForm*  createRobotomyRequestForm(std::string targetName);
        AForm*  createShrubberyCreationForm(std::string targetName);
        AForm*  createPresidentialPardonForm(std::string targetName);
    protected:
      class FormDoesntExsitsException : public std::exception {
      public:
         const char* what() const throw();
};
    public:
        Intern();
        ~Intern();
        Intern(const Intern&  other);
        Intern& operator=(Intern const & rhs);

        AForm*    makeForm(std::string formName, std::string targetName);
};

#endif