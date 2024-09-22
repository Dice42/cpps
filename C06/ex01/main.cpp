/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:44:14 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/22 13:49:09 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data student;

	student.name = "mohamed";
	student.age = 31;
	
	
	uintptr_t ptr;
	ptr = Serializer::serialize(&student);
	
	std::cout << ptr << std::endl;
	std::cout << reinterpret_cast<Data *>(ptr)->name << std::endl;
	std::cout << reinterpret_cast<Data *>(ptr)->age << std::endl;
	
}