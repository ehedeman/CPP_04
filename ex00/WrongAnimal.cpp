/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:01:55 by ehedeman          #+#    #+#             */
/*   Updated: 2024/10/01 12:05:29 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ):type("Some WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy Constructor called." << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deonstructor called." << std::endl;
}


WrongAnimal				&WrongAnimal::operator=( const WrongAnimal &copy )
{
	std::cout << "WrongAnimal Assignment Operator called." << std::endl;
	if (&copy != this)
	{
		this->type = copy.type;
		return (*this);
	}
	return (*this);
}

std::string	const	WrongAnimal::getType( void ) const {return (this->type);}
void				WrongAnimal::setType( std::string _type){this->type = _type;}

void				WrongAnimal::makeSound( void )const
{	
	std::cout << "*some WrongAnimal noise*" << std::endl;
}
