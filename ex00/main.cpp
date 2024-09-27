/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:10:44 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 11:38:15 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
{
	Animal a;
	Cat c;
	Dog d;
	
	std::cout << "AnimalType: " <<  a.getType() << std::endl;
	std::cout << "CatType: " << c.getType() << std::endl;
	std::cout << "DogType: " <<  d.getType() << std::endl;
	std::cout << std::endl;
	a.makeSound();
	c.makeSound();
	d.makeSound();
	std::cout << std::endl;
}
	std::cout << std::endl << "Subject main: " << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete(meta);
	delete(i);
	delete(j);
	
	return 0;
}