/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:30:40 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/13 21:36:14 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cout<< "---------- Shrubbery ----------\n" <<std::endl; 
	try {
		
		Bureaucrat sam("Sam", 147);
		ShrubberyCreationForm form("mohed");
		sam.signForm(form);
		form.execute(sam);
		std::cout << form << std::endl;
	}
	catch(std::exception& e){
		std::cout << e.what();
	}
	std::cout<<std::endl; 
	Bureaucrat tee("tee", 15);
	ShrubberyCreationForm form("lei");
	tee.signForm(form);
	tee.executeForm(form);

	std::cout<< "\n---------- Robotoomy ----------\n" <<std::endl; 
	try {
		
		Bureaucrat dice("dice", 147);
		RobotomyRequestForm form2("mohed");
		dice.signForm(form2);
		form2.execute(dice);
		std::cout << form2 << std::endl;
	}
	catch(std::exception& e){
		std::cout << e.what();
	}
	std::cout<<std::endl; 
	Bureaucrat lee("lee", 15);
	RobotomyRequestForm form2("lei");
	lee.signForm(form2);
	lee.executeForm(form2);
	std::cout << form2 << std::endl;

	
	std::cout<< "\n---------- PresidentialPardon ----------\n" <<std::endl; 
	try {
		
		Bureaucrat light("light", 5);
		PresidentialPardonForm form3("mohed");
		light.signForm(form3);
		form3.execute(light);
		std::cout << form3 << std::endl;
	}
	catch(std::exception& e){
		std::cout << e.what();
	}
	
	std::cout<<std::endl; 
	Bureaucrat rob("rob", 15);
	PresidentialPardonForm form3("lei");
	rob.signForm(form3);
	rob.executeForm(form3);
	std::cout << form3 << std::endl;
	
	return (0);
}