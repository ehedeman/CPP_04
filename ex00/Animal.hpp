/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:12:41 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 13:11:43 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
protected:
	std::string				type;
public:
							Animal( void );						//Default Constructor
							Animal( const Animal &copy);				//Copy-Constructor

	virtual					~Animal();							//Deconstructor
	Animal					&operator=( const Animal &copy);	//Assignment Operator
	
	//get-/set/functions
	void					setType( std::string _type );
	std::string		const	getType( void ) const;
	
	//subject specific functions
	virtual void			makeSound( void )const;
};
