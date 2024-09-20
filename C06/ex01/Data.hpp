/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:25:16 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/19 16:27:07 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DATA
#define DATA

#include <iostream>

class Data
{
	public:
		Data();
		Data(const Data & other);
		Data& operator=(const Data & rhs);
		~Data();
		
};

#endif