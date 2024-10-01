/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:01:47 by ehedeman          #+#    #+#             */
/*   Updated: 2024/10/01 12:31:12 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AMateria.hpp"
#include "includes/Character.hpp"
#include "includes/MateriaSource.hpp"


int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");

std::cout << std::endl;

me->use(0, *bob);
me->use(1, *bob);

std::cout << std::endl;

delete bob;
delete me;
delete src;
return 0;
}

// int main()
// {
// 	{	
// 		IMateriaSource* src = new MateriaSource();
		
// 		ICharacter* me = new Character("me");
// 		ICharacter* bob = new Character("bob");
		
// 		AMateria* slot_zero;
// 		AMateria* slot_one;
// 		AMateria* slot_two;
// 		AMateria* slot_three;
// 		AMateria* slot_four;
		
// 		std::cout << "TEST 1: creating Materia without having learned any." << std::endl;
// 		slot_zero = src->createMateria("ice"); //not supposed to work
// 		std::cout << std::endl;
		
// 		std::cout << "TEST 2: learning Materia." << std::endl;
// 		std::cout << "1. " << std::endl;
// 		src->learnMateria(new Ice());
// 		std::cout << "2. " << std::endl;
// 		src->learnMateria(new Cure());
// 		std::cout << "3. " << std::endl;
// 		src->learnMateria(NULL);				//should fail
// 		std::cout << std::endl;
		
// 		std::cout << "TEST 3: creating Materia." << std::endl;
// 		slot_zero = src->createMateria("ice");
// 		slot_one = src->createMateria("cure");
// 		slot_two = src->createMateria("ice");
// 		slot_three = src->createMateria("cure");
// 		slot_four = src->createMateria("ice");
// 		std::cout << std::endl;
		
// 		std::cout << "TEST 4: equipping Materia." << std::endl;
// 		me->equip(slot_zero);
// 		me->equip(slot_one);
// 		me->equip(slot_two);
// 		me->equip(slot_three);
// 		me->equip(slot_four);					//should fail
// 		bob->equip(src->createMateria("fire"));	//should fail
// 		std::cout << std::endl;
	
// 		std::cout << "TEST 5: using Materia." << std::endl;
// 		bob->use(0, *me);						//should fail
// 		me->use(0, *bob);
// 		me->use(1, *bob);
// 		std::cout << std::endl;
		
// 		std::cout << "TEST 6: unequipping Materia." << std::endl;
// 		bob->unequip(0);						//should fail
// 		me->unequip(0);
// 		std::cout << std::endl;
		
// 		std::cout << "TEST 7: copying Character." << std::endl;
// 		Ice		*one = new Ice();
// 		Cure	*zero = new Cure();
		
// 		Character test02("hubert");
// 		test02.equip(zero);
// 		test02.equip(one);
// 		test02.use(0, test02);
// 		test02.use(1, test02);
// 		Character test01(test02);
// 		test01.use(0, test02);
		
// 		test02.unequip(0);
// 		test02.unequip(1);
// 		std::cout << std::endl;
// 		delete(one);
// 		delete(zero);
// 		delete(slot_zero);
// 		delete(slot_four);
// 		delete bob;
// 		delete me;
// 		delete src;
		
// 		return 0;
// 	}
// }
