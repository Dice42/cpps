/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:50:14 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/27 15:52:32 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>
#include <deque>
#include <algorithm>
#include <numeric>

// #include

template <typename T,  typename Container = std::deque<T> >
class MutantStack : public std::stack <T, Container>
{
	private:
	
	public:
		MutantStack();
		MutantStack(MutantStack const &other);
		MutantStack &operator=(MutantStack const &other);
		~MutantStack();


        typedef typename Container::container_type::iterator iterator;
        typedef typename Container::container_type::const_iterator const_iterator;
		
     	iterator begin();
        iterator end();
       	const_iterator cbegin() ;
       	const_iterator cend();
		
};

#include "MutantStack.tpp"
#endif