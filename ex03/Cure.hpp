/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:16:39 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 13:41:08 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	/* data */
public:
				Cure( void );
				Cure(const Cure &copy);
				~Cure();
	Cure		&operator=(const Cure &copy);
	
	AMateria	*clone() const;
	void		use(ICharacter& target);
};
