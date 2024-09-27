/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:39:38 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 12:36:17 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain Default Constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::Brain( const Brain &copy)
{
	std::cout << "Brain Copy Constructor called." << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain Deonstructor called." << std::endl;
}

Brain		&Brain::operator=(const Brain &copy)
{
	std::cout << "Brain Assignment Operator called." << std::endl;
	if (&copy != this)
	{
		for (int i = 0; i < 100; i++)
		{
			if (copy.ideas[i].length() > 0)
				this->ideas[i].assign(copy.ideas[i]);
		}
		return (*this);
	}
	return (*this);
}

std::string	Brain::getIdea( int index ){return(this->ideas[index]);}
void		Brain::setIdea( std::string idea, int index){this->ideas[index] = idea;}

void		Brain::printIdeas( void )
{
	for (int i = 0; i < 100; i++)
	{
		if (this->ideas[i] != "")
			std::cout << this->ideas[i] << std::endl;
	}
}