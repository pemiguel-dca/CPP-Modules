/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:48:34 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/25 13:32:39 by pemiguel         ###   ########.fr       */
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
	/*Example in subject*/
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j; //should not create a leak
	delete i;

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

