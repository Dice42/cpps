/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:11:55 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/14 20:20:25 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(void) 
	: AForm("RobotomyRequestForm", 72, 45), _target("Default_target"){}
RobotomyRequestForm::RobotomyRequestForm(std::string target) 
	: AForm("RobotomyRequestForm", 72, 45), _target(target){}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), _target(other._target){}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return (*this);
}

/*	srand() sets the seed which is used by rand to generate “random” numbers.
	If you don’t call srand before your first call to rand,
	it’s as if you had called srand(1) to set the seed to one. 
	In short, srand() — Set Seed for rand() Function.*/
void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	beExecute(executor);
	std::cout << "drilling noises...." << std::endl;
	std::srand(std::time(NULL));
	if (std::rand() % 2 == 0)
		std::cout << "🤖 " << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy failed for "  << RED  << _target << RESET << std::endl;
}