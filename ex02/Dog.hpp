/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:12:55 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/30 12:36:37 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
						Dog();						//Default Constructor
						Dog( const Dog &copy);				//Copy-Constructor
						~Dog();							//Deconstructor
	Dog					&operator=( const Dog &copy);	//Assignment Operator
	
	Brain	const		*getBrain();
	//subject specific functions
	void				makeSound( void )const;
	std::string	const	getIdea(int index)const;
	void				setIdea( std::string idea, int index);
	
	void				printIdeas()const;
};