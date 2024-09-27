/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:16:42 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 15:34:45 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(/* args */): AMateria("cure")
{
	this->mana_usage = 10;
	this->hp_restore = 5;
}

Cure::Cure(const Cure &copy)
{
	*this = copy;
}

Cure::~Cure()
{
}

Cure		&Cure::operator=(const Cure &copy)
{
	if (this != &copy)
	{
		this->hp_restore = copy.hp_restore;
		this->mana_usage = copy.mana_usage;
		return (*this);
	}
	return (*this);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria	*Cure::clone() const
{
	AMateria *mate = new Cure();
	return (mate);
}

int			Cure::getHP_res(){return(this->hp_restore);}
int			Cure::getManaUsage(){return(this->mana_usage);}
void		Cure::setHP_res(int res){this->hp_restore = res;}
void		Cure::setManaUsage(int mana){this->mana_usage = mana;}