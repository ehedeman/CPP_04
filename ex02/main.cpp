/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:10:44 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/27 12:57:39 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Animal a(); //this is not possible if u try because its abstract now
	{
		Animal	*animals[4];
	
		for (int i = 0; i < 4; i++)
		{
			if (i % 2)
			{
				animals[i] = new Dog();
				if (!animals[i])
				{
					std::cerr << "Allocation Failed." << std::endl;
					return (0);
				}
			}
			else
			{
				animals[i] = new Cat();
				if (!animals[i])
				{
					std::cerr << "Allocation Failed." << std::endl;
					return (0);
				}
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
		for (int i = 0; i < 4; i++)
		{
			delete(animals[i]);
			std::cout << std::endl;
		}
	}
	{
		Cat cat;
		Dog dog;

		dog.getBrain()->setIdea("Treat??", 0);
		dog.getBrain()->setIdea("Walk??", 1);
		dog.getBrain()->setIdea("Sit??", 2);
		dog.getBrain()->setIdea("Stay??", 3);
		cat.getBrain()->setIdea("Must..Destroy..", 0);
		cat.getBrain()->setIdea("Pee on sofa?", 1);
		cat.getBrain()->setIdea("Gotta throw up..", 2);
		cat.getBrain()->setIdea("This the litter box?", 3);
		
		std::cout << std::endl << "Testing for Deep-Copies: " << std::endl << std::endl;
		
		Dog *dog_c(&dog);
		Cat *cat_c(&cat);
		
		std::cout << "Dog thoughts:" << std::endl;
		dog_c->getBrain()->printIdeas();
		std::cout << std::endl;
		std::cout << "Cat thoughts:" << std::endl;
		cat_c->getBrain()->printIdeas();
		std::cout << std::endl;
	}
}