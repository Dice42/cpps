/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:04:16 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/24 19:22:24 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <class T> 
Array<T>::~Array()
{
	if (arr)
		delete[] arr;
}

template <class T>
Array<T>::Array() : arr(NULL), _size(0){}

template <class T>
Array<T>::Array(unsigned int n) : _size(n)
{
	if (n == 0)
		arr = NULL;
	else
		arr = new T[n](); // this will initialize the array with default values
}

template <class T>
Array<T>::Array(const Array& other) : _size(other._size)
{
	arr = new T[other._size]();
	for (unsigned int i = 0; i < other._size; i++)
		arr[i] = other.arr[i];
}

template <class T>
Array<T>&	Array<T>::operator=(const Array& rhs)
{
	_size = rhs._size;
	delete[] arr;
	arr = new T[rhs._size]();
	for (unsigned int i = 0; i < rhs._size; i++)
		arr[i] = rhs.arr[i];
	return *this;
}

template <class T>
T&		Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw OutOfBounds();
	return (arr[index]);
}
template <class T>
const char* 	Array<T>::OutOfBounds::what() const throw(){return ("Index is Out Of Bounds!");}

template <class T>
unsigned int	Array<T>::size() const {return _size;}

#endif