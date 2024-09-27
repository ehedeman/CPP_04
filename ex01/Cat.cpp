/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:12:44 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 12:28:09 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat Default Constructor called." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	if (!this->brain)
	{
		std::cerr << "Cat Brain allocation failed." << std::endl;
		exit(1);
	}

}

Cat::Cat( const Cat &copy): Animal()
{
	std::cout << "Cat Copy Constructor called." << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	delete(this->brain);
	std::cout << "Cat Deonstructor called." << std::endl;
}


Cat		&Cat::operator=( const Cat &copy )
{
	std::cout << "Cat Assignment Operator called." << std::endl;
	if (&copy != this)
	{
		this->type = copy.type;
		this->brain = new Brain();
		if (!this->brain)
		{
			std::cerr << "Cat Brain allocation failed." << std::endl;
			exit(1);
		}
		*this->brain = *copy.brain;
		return (*this);
	}
	return (*this);
}

void	Cat::makeSound( void )const
{
	delete(this->brain);
	std::cout << "meow" << std::endl;
}

Brain	*Cat::getBrain( void ){return(this->brain);}