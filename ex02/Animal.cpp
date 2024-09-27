/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:12:35 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 12:54:25 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ):type("Some Animal")
{
	std::cout << "Animal Default Constructor called." << std::endl;
}

Animal::Animal( const Animal &copy)
{
	std::cout << "Animal Copy Constructor called." << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal Deonstructor called." << std::endl;
}


Animal		&Animal::operator=( const Animal &copy )
{
	std::cout << "Animal Assignment Operator called." << std::endl;
	if (&copy != this)
	{
		this->type = copy.type;
		return (*this);
	}
	return (*this);
}

std::string		Animal::getType( void ) const {return (this->type);}
void			Animal::setType( std::string _type){this->type = _type;}

