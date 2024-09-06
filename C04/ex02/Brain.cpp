/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:16:10 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/06 16:46:06 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = "bright ideas only here!";
	std::cout << BLUE << "Brain constructor is called" << RESET << std::endl;
}

/* destructor */
Brain::~Brain(void)
{
	delete [] ideas;
	std::cout <<  "Brain Destructor is called" << std::endl;
}

/* copy constructor */
Brain::Brain(Brain& other)
{
	std::string *ref_ideas = other.getBrainIdeas();
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = ref_ideas[i] + "\t\t REALLY!!!, copying my ideas?";
}

/* copy assignment operator */
Brain&		Brain::operator=(const Brain& rhs)
{
	if (this != &rhs)
	{
		delete[] ideas;
		ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

std::string*		Brain::getBrainIdeas() {return (ideas);}