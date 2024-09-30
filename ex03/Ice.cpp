/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:17:00 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/30 15:10:59 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Ice.hpp"

Ice::Ice(/* args */): AMateria("ice")
{
	std::cout << "Ice constructor." << std::endl;
	this->mana_usage = 10;
	this->demage = 5;
}

Ice::Ice(const Ice &copy): AMateria(copy)
{
	std::cout << "Ice copy constructor." << std::endl;
	*this = copy;
}

Ice::~Ice()
{
	std::cout << "Ice deconstructor." << std::endl;
}

Ice		&Ice::operator=(const Ice &copy)
{
	std::cout << "Ice Assignment operator." << std::endl;
	if (this != &copy)
	{
		this->demage = copy.demage;
		this->mana_usage = copy.mana_usage;
		return (*this);
	}
	return (*this);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria	*Ice::clone() const
{
	//AMateria *mate = new Ice();
	return (new Ice);
}

int			Ice::getDemage(){return(this->demage);}
int			Ice::getManaUsage(){return(this->mana_usage);}
void		Ice::setDemage(int dmg){this->demage = dmg;}
void		Ice::setManaUsage(int mana){this->mana_usage = mana;}