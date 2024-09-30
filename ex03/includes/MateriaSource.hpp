/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:56:12 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/30 13:45:09 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource  : public IMateriaSource
{
private:
	AMateria		*learned[4];
public:
					MateriaSource(/* args */);
					MateriaSource(const MateriaSource &copy);
					~MateriaSource();
				
	MateriaSource	&operator=(const MateriaSource &copy);			
	
	void			learnMateria(AMateria *);
	AMateria		*createMateria(std::string const &_type);
};