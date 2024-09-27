/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:02:19 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 13:22:09 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class AMateria
{
protected:
	std::string			type;
public:
						AMateria( void );
						AMateria(std::string const &type);
						AMateria(const AMateria &copy);
						~AMateria();
	AMateria			&operator=(const AMateria &copy);
	
	std::string	const	&getType();
	
	virtual	AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);
};
