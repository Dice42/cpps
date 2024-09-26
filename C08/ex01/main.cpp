/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:29:18 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/26 21:56:28 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	 try
    {
        Span sp(10);

        sp.addNumber(5);

        int arr[] = {1, 2, 3, 4};
        sp.addRange(arr, arr + 4);

        int arr2[] = {6, 7, 8, 9, 19};
        std::vector<int>  otherVec(arr2, arr2 + sizeof(arr2)/ sizeof(int));
        
        sp.addRange(otherVec.begin(), otherVec.end());

        std::cout << "Span contains: ";
        std::vector<int>::iterator itr;
	    for (itr = sp.getVec().begin(); itr < sp.getVec().end(); itr++)
	    {
            std::cout << *itr << " ";
		}
        std::cout << std::endl;
	}
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}