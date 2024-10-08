/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:24:34 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/24 21:16:42 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint>

// typedef unsigned long uintptr_t;

struct Data
{
	std::string	name;
	int			age;
};

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer & other);
		Serializer& operator=(const Serializer & rhs);
		~Serializer();

	public:
		static uintptr_t serialize(Data* ptr);
		static Data*	 deserialize(uintptr_t raw);
};
#endif