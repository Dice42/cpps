/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:12:16 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/14 20:18:02 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void		draw_tree(std::string target)
{
        std::ofstream	outfile;
        outfile.open((target + "_shrubbery").c_str());
        if (outfile.fail())
            throw 1;
        outfile << "                                      v .   ._, |_  ., \n";
        outfile << "                           `-._\\/  .  \\ /    |/  /  /  /   \n";
        outfile << "                                \\\\  _\\, y | \\//  \n";
        outfile << "                          _\\_.___\\\\, \\\\/ -.\\\\||  \n";
        outfile << "                            `7-,--.`._||  / / ,  \n";
        outfile << "                           /'     `-. `./ / |/_.'  \n";
        outfile << "                                     |    |//  \n";
        outfile << "                                      |_    /   \n";
        outfile << "                                      |-   |   \n";
        outfile << "                                      |   =|   \n";
        outfile << "                                      |    |   \n";
        outfile << "                       --------------------------------   \n";
        outfile << "                     / ,      .    .   .    ,   . \\--------._  \n";
        outfile << "                   / ,      .    .   .    ,   . \\--------._  \n";
        outfile << "                / ,      .    .   .    ,   . \\--------._  \n";
        outfile << "              / ,      .    .   .    ,   . \\--------._  \n";
        outfile.close();
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
    : AForm("ShrubberyCreationForm", 145, 137), _target(target){}
ShrubberyCreationForm::ShrubberyCreationForm(void) 
    : AForm("ShrubberyCreationForm", 145, 137), _target("Default_Target"){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), _target(other._target){}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
        _target = rhs._target;
	}
    return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}



void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    beExecute(executor);
    draw_tree(this->_target);
}
