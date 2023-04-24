/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:48:34 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/24 16:59:15 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "NEW TEST!" << std::endl;

	const WrongAnimal* wrongOne = new WrongCat();
	//std::cout << wrongOne->getType() << " " << std::endl;
	//wrongOne->makeSound(); //will output the DOG sound(the wrong one)!

	std::cout << "Destructors ON!" << std::endl;
	delete meta;
	delete i;
	delete j;
	delete wrongOne;
	return (0);
}
