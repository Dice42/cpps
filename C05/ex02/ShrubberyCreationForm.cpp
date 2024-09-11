/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:12:16 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/11 20:27:41 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

bool		draw_tree(std::string target)
{
	std::ofstream	outfile;
	outfile.open((target + "_shrubbery").c_str());
	if (outfile.fail())
	{
		std::cout << RED << "Error:" << RESET << " OutFile cannot be open "  << std::endl;
		return (false);
	}
    outfile << "                                                     v .   ._, |_  ., \n";
    outfile << "                                          `-._\\/  .  \\ /    |/  /  /  /   \n";
    outfile << "                                               \\\\  _\\, y | \\//  \n";
    outfile << "                                         _\\_.___\\\\, \\\\/ -.\\\\||  \n";
    outfile << "                                           `7-,--.`._||  / / ,  \n";
    outfile << "                                          /'     `-. `./ / |/_.'  \n";
    outfile << "                                                    |    |//  \n";
    outfile << "                                                     |_    /   \n";
    outfile << "                                                     |-   |   \n";
    outfile << "                                                     |   =|   \n";
    outfile << "                                                     |    |   \n";
    outfile << "                                      --------------------------------   \n";
    outfile << "                                    / ,      .    .   .    ,   . \\--------._  \n";
    outfile << "                                  / ,      .    .   .    ,   . \\--------._  \n";
    outfile << "                               / ,      .    .   .    ,   . \\--------._  \n";
    outfile << "                             / ,      .    .   .    ,   . \\--------._  \n";
}


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	// if (!draw_tree(target))
		//maybe throw an exception
	draw_tree(target);
		
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other){}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}