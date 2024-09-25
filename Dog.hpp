/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:12:55 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/25 15:03:01 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
private:

public:
					Dog();						//Default Constructor
					Dog( const Dog &copy);				//Copy-Constructor
					~Dog();							//Deconstructor
	Dog				&operator=( const Dog &copy);	//Assignment Operator
	
	//subject specific functions
	void			makeSound( void )const;
};