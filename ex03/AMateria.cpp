/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:02:09 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/30 12:54:13 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AMateria.hpp"

AMateria::AMateria( void ):type("default"){}

AMateria::AMateria(std::string const &_type):type(_type){}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria::~AMateria()
{
}

AMateria        &AMateria::operator=(const AMateria &copy)
{
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
