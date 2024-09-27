/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:12:52 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 12:27:52 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog Default Constructor called." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	if (!this->brain)
	{
		std::cerr << "Dog Brain allocation failed." << std::endl;
		exit(1);
	}
}

Dog::Dog( const Dog &copy): Animal ()
{
	std::cout << "Dog Copy Constructor called." << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	delete(this->brain);
	std::cout << "Dog Deonstructor called." << std::endl;
}


Dog		&Dog::operator=( const Dog &copy )
{
	std::cout << "Dog Assignment Operator called." << std::endl;
	if (&copy != this)
	{
		this->type = copy.type;
		this->brain = new Brain();
		if (!this->brain)
		{
			std::cerr << "Dog Brain allocation failed." << std::endl;
			exit(1);
		}
		*this->brain = *copy.brain;
		return (*this);
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "woof" << std::endl;
}

Brain	*Dog::getBrain( void ){return(this->brain);}