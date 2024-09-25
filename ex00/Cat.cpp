/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:12:44 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/25 15:02:19 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat Default Constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat &copy): Animal()
{
	std::cout << "Cat Copy Constructor called." << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat Deonstructor called." << std::endl;
}


Cat		&Cat::operator=( const Cat &copy )
{
	std::cout << "Cat Assignment Operator called." << std::endl;
	if (&copy != this)
	{
		this->type = copy.type;
		return (*this);
	}
	return (*this);
}

void	Cat::makeSound( void )const
{
	std::cout << "meow" << std::endl;
}