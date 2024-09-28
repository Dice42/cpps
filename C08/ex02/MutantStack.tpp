/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:58:41 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/28 15:57:55 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP
#include "MutantStack.hpp"


template <typename T,  typename Container>
MutantStack<T, Container>::MutantStack(){}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack(){};

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(MutantStack const &other) : std::stack <T, Container>() {
	this->c = other.c;
};

template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(MutantStack const &other) 
{
	this->c = other.c;
	return (*this);
};

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator 		MutantStack<T, Container>::begin(){return std::stack<T, Container>::c.begin();}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator 		MutantStack<T, Container>::end() {return this->c.end();}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator 		MutantStack<T, Container>::cbegin(){return std::stack<T, Container>::c.begin();}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator 		MutantStack<T, Container>::cend() {return this->c.end();}

#endif