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

#include "Character.hpp"

Character::Character( void ): ICharacter()
{
	this->HP = 100;
	this->MP = 50;
	this->name = "default";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	
}

Character::Character(std::string _name): ICharacter()
{
	this->HP = 100;
	this->MP = 50;
	this->name = _name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &copy): ICharacter(copy)
{
	*this = copy;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete(this->inventory[i]);
	}
}

Character		&Character::operator=(const Character &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->HP = copy.HP;
		this->MP = copy.MP;
		for (int i = 0; i < 4; i++)
		{
			if (copy.inventory[i])
			{
				if (copy.inventory[i]->getType() == "ice")
					this->inventory[i] = new Ice();
				else if (copy.inventory[i]->getType() == "cure")
					this->inventory[i] = new Cure();
				delete(copy.inventory[i]);
			}
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string	const	&Character::getName() const {return(this->name);}

void				Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
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
	std::cout << this->name << " uses " << this->inventory[idx] <<
	" against " << target.getName() << "!" << std::endl;
}