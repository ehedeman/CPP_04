/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:16:57 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 13:41:15 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	/* data */
public:
				Ice( void );
				Ice(const Ice &copy);
				~Ice();
	Ice		&operator=(const Ice &copy);
	
	AMateria	*clone() const;
	void		use(ICharacter& target);
};
