/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:39:27 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/30 12:39:15 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Brain
{
private:

	std::string ideas[100];
	
public:

						Brain();
						~Brain();
						Brain(const Brain &copy);
	Brain				&operator=(const Brain &copy);
	
	std::string	const	getIdea(int index)const;
	std::string			*getIdeas();
	void				setIdea( std::string idea, int index);
	
	void				printIdeas()const;
};
