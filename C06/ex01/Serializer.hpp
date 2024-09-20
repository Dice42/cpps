/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:24:34 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/19 16:27:49 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER
#define SERIALIZER

#include <cstdint>
#include "Data.hpp"

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer & other);
		Serializer& operator=(const Serializer & rhs);
		~Serializer();
		

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
#endif