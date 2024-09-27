/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:50:41 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 15:07:45 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character: public ICharacter
{
private:

	std::string			name;
	AMateria			*inventory[4];
	int					HP;
	int					MP;

public:
						Character( void );	
						Character(std::string _name);
						Character(const Character &copy);
						~Character();
	
	Character			&operator=(const Character &copy);
	std::string const	&getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
};
