/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:12:41 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/30 12:26:10 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h> 

class Animal
{
protected:
	std::string					type;
public:
								Animal( void );						//Default Constructor
								Animal( const Animal &copy);				//Copy-Constructor

	virtual						~Animal();							//Deconstructor
	Animal						&operator=( const Animal &copy);	//Assignment Operator
	
	//get-/set/functions
	virtual void				setType( std::string _type );
	virtual std::string	const	getType( void ) const;
	
	//subject specific functions
	virtual void				makeSound( void)const = 0;
};
