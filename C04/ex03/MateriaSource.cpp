/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:14:49 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/07 18:43:26 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		m[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
            delete m[i];
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other.m[i])
			m[i] = other.m[i]->clone();
		else
			m[i] = NULL;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs)
{
	 if (this != &rhs)
	 {
        for (int i = 0; i < 4; i++)
		{
            delete m[i];
			if (rhs.m[i])
				m[i] = rhs.m[i]->clone();
			else
				m[i] = NULL;
        }
    }
	return (*this);
}

void 			MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
    {
        if (!this->m[i])
        {
            this->m[i] = m;
            break;
        }
    }
}

AMateria*		MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
    {
        if (this->m[i] != NULL && this->m[i]->getType() == type)
            return (this->m[i]->clone());
    }
    return (NULL);
}