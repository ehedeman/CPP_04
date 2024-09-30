/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Characterr.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:50:45 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 14:52:58 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Character.hpp"

Character::Character( void ): ICharacter()
{
	std::cout << "Character constructor." << std::endl;
	this->HP = 100;
	this->MP = 50;
	this->name = "default";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string _name): ICharacter()
{
	std::cout << "Character name constructor." << std::endl;
	this->HP = 100;
	this->MP = 50;
	this->name = _name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &copy): ICharacter(copy)
{
	std::cout << "Character copy constructor." << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	*this = copy;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
			continue;
		if (this->inventory[i])
		{
			delete(this->inventory[i]);
			this->inventory[i] = NULL;
		}
	}
	std::cout << "Character deconstructor." << std::endl;
}

Character		&Character::operator=(const Character &copy)
{
	if (this != &copy)
	{
		this->name = copy.name + "_clone";
		this->HP = copy.HP;
		this->MP = copy.MP;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i] != NULL)
			{
				delete(this->inventory[i]);
				this->inventory[i] = NULL;
			}
			if (copy.inventory[i])
				this->inventory[i] = copy.inventory[i]->clone();
		}
	}
	std::cout << "Character Assignment operator." << std::endl;
	return (*this);
}

std::string	const	&Character::getName() const {return(this->name);}

void				Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << "Oh? The materia doesnt seem to exist.." << std::endl;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			std::cout << "The Materia has been equipped!" << std::endl;
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << "There are no free slots." << std::endl;
}

void				Character::unequip(int idx)
{
	if (this->inventory[idx])
	{
		this->inventory[idx] = NULL;
		std::cout << "The Materia has been unequipped." << std::endl;
	}
	else
		std::cout << "There is no Materia equipped on that slot." << std::endl;
}

void			Character::use(int idx, ICharacter &target)
{
	if (!this->inventory[idx])
	{
		std::cout << this->name << " tries to use a Materia " <<
		" against " << target.getName() << "!" << std::endl;
		std::cout << "But oh no! There is no Marteria to use on that slot!" << std::endl;
		return ;
	}
	std::cout << this->name << " uses " << this->inventory[idx]->getType() <<
	" against " << target.getName() << "!" << std::endl;
}