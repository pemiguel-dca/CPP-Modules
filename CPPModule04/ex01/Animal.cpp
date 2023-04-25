/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:22:37 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/24 15:52:14 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type ("Default")
{
	std::cout << "Animal default constructor has been called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor has been called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	*this = other;

	std::cout << "Animal copy constructor has been called" << std::endl;
}

Animal& Animal::operator = (const Animal& other)
{
	this->type = other.type;

	std::cout << "Animal copy assignment operator has been called" << std::endl;
	return (*this);
}

void	Animal::makeSound() const
{
	if (this->type.compare("Dog") == 0)
		std::cout << "Bark I guess" << std::endl;
	else if (this->type.compare("Cat") == 0)
		std::cout << "Miau I guess" << std::endl;
	else
		std::cout << "I dunno what animal I am" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
