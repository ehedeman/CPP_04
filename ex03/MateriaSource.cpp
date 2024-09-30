/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:56:14 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/30 14:29:16 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/MateriaSource.hpp"
#include "includes/MarteriaTypes.hpp"

MateriaSource::MateriaSource(/* args */)
{
	std::cout << "MateriaSource constructor." << std::endl;
	for (int i = 0; i < 4; i++)
		this->learned[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource copy constructor." << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		//std::cout << this->learned[i]->getType() << std::endl;
		if (!this->learned[i])
			continue;
		if (this->learned[i])
		{
			delete(this->learned[i]);
			this->learned[i] = NULL;
		}
	}
	std::cout << "MateriaSource deconstructor." << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	std::cout << "MateriaSource Assignment operator." << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->learned[i])
			{
				delete(this->learned[i]);
				this->learned[i] = NULL;
			}
			if (copy.learned[i])
			{
				if (copy.learned[i]->getType() == "ice")
					this->learned[i] = new Ice();
				else if (copy.learned[i]->getType() == "cure")
					this->learned[i] = new Cure();
			}
		}
	}
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *ptr)
{
	std::cout << "Trying to learn a new Materia.." << std::endl;
	if (!ptr)
	{
		std::cout << "There's no new Materia to learn.." << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->learned[i])
		{
			std::cout << "New Materia has been learned!" << std::endl;
			this->learned[i] = ptr;
			return ;
		}
	}
	std::cout << "there are no free slots" << std::endl;
}

AMateria		*MateriaSource::createMateria(std::string const &_type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i] && this->learned[i]->getType() == _type)
			return (this->learned[i]->clone());
	}
	std::cout << "Oh no, there seems to be no Materia with this type." << std::endl;
	return (NULL);
}