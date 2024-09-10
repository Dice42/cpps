/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:30:40 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/10 14:55:43 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void)
{
	Bureaucrat jack("jack", 1);
	std::cout << jack << std::endl;
	Bureaucrat bill("bill", 60);
	try {
		Bureaucrat curtis("curtis", 0);
		std::cout << curtis << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << "\n";
	}
	std::cout << bill << std::endl;


	Form tax = Form("Tax", 4, 2);
	try {
		tax.beSigned(bill);
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	std::cout << tax;
	tax.signForm(bill);

	
	try {
		tax.beSigned(jack);
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	std::cout << tax;
	tax.signForm(jack);
	
	return (0);
}