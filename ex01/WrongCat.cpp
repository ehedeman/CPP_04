/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCatngCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:12:44 by ehedeman          #+#    #+#             */
/*   Updated: 2024/10/01 12:06:01 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat Default Constructor called." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &copy): WrongAnimal()
{
	std::cout << "WrongCat Copy Constructor called." << std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deonstructor called." << std::endl;
}


WrongCat		&WrongCat::operator=( const WrongCat &copy )
{
	std::cout << "WrongCat Assignment Operator called." << std::endl;
	if (&copy != this)
	{
		this->type = copy.type;
		return (*this);
	}
	return (*this);
}
