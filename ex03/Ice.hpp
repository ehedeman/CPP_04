/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:16:57 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 15:33:38 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	int			demage;
	int			mana_usage;
public:
				Ice( void );
				Ice(const Ice &copy);
				~Ice();
	Ice			&operator=(const Ice &copy);

	int			getDemage();
	int			getManaUsage();
	void		setDemage(int dmg);
	void		setManaUsage(int mana);

	AMateria	*clone() const;
	void		use(ICharacter& target);
};
