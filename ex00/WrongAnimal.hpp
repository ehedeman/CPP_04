/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:01:52 by ehedeman          #+#    #+#             */
/*   Updated: 2024/10/01 12:04:37 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class WrongAnimal
{
protected:
	std::string				type;
public:
							WrongAnimal( void );						//Default Constructor
							WrongAnimal( const WrongAnimal &copy);		//Copy-Constructor

	virtual					~WrongAnimal();								//Deconstructor
	WrongAnimal				&operator=( const WrongAnimal &copy);		//Assignment Operator
	
	//get-/set/functions
	void					setType( std::string _type );
	std::string		const	getType( void ) const;
	
	//subject specific functions
	virtual void			makeSound( void )const;
};

