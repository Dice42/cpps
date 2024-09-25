/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:31:59 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/24 19:02:55 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <class T>
void	swap(T& x, T& y)
{
	T tmp = x;
	
	x = y;
	y = tmp;
}

template <class T>
T		max(T const x, T const y)
{
	return (x > y ? x : y);
}

template <class T>
T		min(T const x, T const y)
{
	return (x < y ? x : y);
}

#endif