/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:02:09 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/30 14:24:07 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AMateria.hpp"

AMateria::AMateria( void ):type("default")
{
	std::cout << "AMateria constructor." << std::endl;
}

AMateria::AMateria(std::string const &_type):type(_type)
{
	std::cout << "AMateria type constructor." << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "AMateria copy constructor." << std::endl;
	*this = copy;
}

AMateria::~AMateria()
{
	std::cout << "AMateria deconstructor." << std::endl;
}

AMateria        &AMateria::operator=(const AMateria &copy)
{
	std::cout << "AMateria Assignment operator." << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

std::string const    &AMateria::getType(){return (this->type);}

void		AMateria::use(ICharacter &target)
{
	std::cout << "*something gets used on " << target.getName() <<
	".*" << std::endl;
}
