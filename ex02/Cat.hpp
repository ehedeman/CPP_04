/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:12:48 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 13:10:43 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	class Brain *brain;
public:
					Cat();						//Default Constructor
					Cat( const Cat &copy);				//Copy-Constructor

					~Cat();							//Deconstructor
	Cat				&operator=( const Cat &copy);	//Assignment Operator
	
	Brain	const	*getBrain();
	//subject specific functions
	void			makeSound( void ) const;
};