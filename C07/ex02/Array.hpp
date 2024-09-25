/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:21:03 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/24 19:23:56 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
template <class T>
class Array
{
	private:
		T			*arr;
		unsigned int _size;
		
	protected:
		class OutOfBounds : public std::exception {
			public:
				const char* what() const throw();
		};

	public:
	~Array();
	 Array();
	 Array(unsigned int n); 
	 Array(const Array& other);
	 Array&	operator=(const Array& rhs);
	 
	 T&		operator[](unsigned int index);
	 unsigned int	size() const;

};

#include "Array.tpp"
#endif