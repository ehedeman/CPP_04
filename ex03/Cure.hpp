/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:16:39 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 15:34:13 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	int			hp_restore;
	int			mana_usage;
public:
				Cure( void );
				Cure(const Cure &copy);
				~Cure();
	Cure		&operator=(const Cure &copy);
	
	int			getHP_res();
	int			getManaUsage();
	void		setHP_res(int res);
	void		setManaUsage(int mana);

	AMateria	*clone() const;
	void		use(ICharacter& target);
};
