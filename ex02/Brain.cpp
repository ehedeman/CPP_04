/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:39:38 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/30 12:41:36 by ehedeman         ###   ########.fr       */
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

std::string const	Brain::getIdea( int index )const{return(this->ideas[index]);}
std::string			*Brain::getIdeas(){return (this->ideas);}
void				Brain::setIdea( std::string idea, int index)
{
	if (index < 100)
		this->ideas[index] = idea;
	else
		std::cerr << "Too large number." << std::endl;
}

void		Brain::printIdeas( void )const
{
	for (int i = 0; i < 100; i++)
	{
		if (this->ideas[i] != "")
			std::cout << this->ideas[i] << std::endl;
	}
}