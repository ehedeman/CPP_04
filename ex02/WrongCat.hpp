/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:02:02 by ehedeman          #+#    #+#             */
/*   Updated: 2024/10/01 12:06:58 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	
public:
					WrongCat();									//Default Constructor
					WrongCat( const WrongCat &copy);			//Copy-Constructor
					~WrongCat();								//Deconstructor
	WrongCat		&operator=( const WrongCat &copy);			//Assignment Operator
	
	//subject specific functions
};


