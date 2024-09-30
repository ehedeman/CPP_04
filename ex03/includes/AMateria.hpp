/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:02:19 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/30 14:18:40 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

//abstract class for the Ice and Cure type Materias

class AMateria
{
protected:
	std::string			type;
public:
						AMateria( void );
						AMateria(std::string const &_type);
						AMateria(const AMateria &copy);
	virtual				~AMateria();
	AMateria			&operator=(const AMateria &copy);
	
	std::string	const	&getType();
	
	virtual	AMateria	*clone() const = 0;
	virtual void		use(class ICharacter &target);
};
