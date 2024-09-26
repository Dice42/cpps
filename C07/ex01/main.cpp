/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:20:01 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/26 21:47:08 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <class T>
void	printer(T& param)
{
	std::cout << param << std::endl;
}

int main()
{
	std::cout << "------------------std::string---------------------------\n";
	std::string	 str[5] = {"my","name","is","unc","mohamed"};
	iter(str, 15, printer<std::string>);

	std::cout << "\n------------------integer-------------------------------\n";
	int			 integer[10] = {1,2,3,4,5,6,7,8,9,0};
	iter(integer, 6, printer<int>);

	std::cout << "\n------------------float-------------------------------\n";
	float		_float[3] = {1.1,4.5,23.249};
	iter(_float, 3, printer<float>);

}