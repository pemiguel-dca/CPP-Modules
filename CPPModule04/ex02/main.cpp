/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:48:34 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/25 14:20:03 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

/*Polymorphism
When we use virtual functions or ihneritance

Polymorphism allows us to treat objects of different types as if they
were of the same type, and call the appropriate
function implementations based on the actual type of the object being pointed to.
*/

int main()
{
	/*This example no longer works since 'Animal' is an abstract class and cannot be instantiated*/
	//Animal *j = new Animal();
	const Animal* animals[NUM_ANIMALS];
	for (int i = 0; i < NUM_ANIMALS / 2; i++)
		animals[i] = new Cat();
	for (int i = NUM_ANIMALS / 2; i < NUM_ANIMALS; i++)
		animals[i] = new Dog();
	for (int i = 0; i < NUM_ANIMALS; i++)
	{
		std::cout << animals[i]->getType() << " ";
		animals[i]->makeSound();
		delete animals[i];
	}
	return 0;
}

