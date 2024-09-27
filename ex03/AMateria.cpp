/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:02:09 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 13:26:53 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
}

AMateria::AMateria(std::string const &type)
{
}

AMateria::AMateria(const AMateria &copy)
{
}

AMateria::~AMateria()
{
}

AMateria        &AMateria::operator=(const AMateria &copy)
{

}

std::string const    &AMateria::getType(){return (this->type);}

void		AMateria::use(ICharacter &target)
{
    
}