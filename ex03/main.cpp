/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:01:47 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/30 14:13:28 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AMateria.hpp"
#include "includes/Character.hpp"
#include "includes/MateriaSource.hpp"

int main()
{
	{	
		IMateriaSource* src = new MateriaSource();
		
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		ICharacter* me = new Character("me");
		
		AMateria* slot_zero;
		AMateria* slot_one;
		
		slot_zero = src->createMateria("ice");
		me->equip(slot_zero);
		
		slot_one = src->createMateria("cure");
		me->equip(slot_one);
		
		
		ICharacter* bob = new Character("bob");
		
		bob->equip(src->createMateria("fire"));
		bob->use(0, *me);
		bob->unequip(0);
		me->use(0, *bob);
		me->use(1, *bob);
		me->unequip(0);
		delete(slot_zero);
		delete bob;
		delete me;
		delete src;
		
		return 0;
	}
}
