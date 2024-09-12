/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:12:16 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/12 12:37:42 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void		draw_tree(std::string target)
{
    try 
    {
        std::ofstream	outfile;
        outfile.open((target + "_shrubbery").c_str());
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
    } catch (std::exception& exception) {
		std::cerr << exception.what() << std::endl;}
}


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137){}
// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other){}
// ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}



void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try 
	{
		beExecute(executor);
        draw_tree(target);
		std::cout << executor.getName() << RED << " executed " << RESET << "Shrubbery Creation Form." << std::endl;
	}
	catch (const AForm::GradeTooLowException& e) {
        std::cout << executor.getName() << " couldn’t execute Shrubbery Creation Form because "
					<< YELLOW << e.what() << RESET << std::endl;
    }
}
