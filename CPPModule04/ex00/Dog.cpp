/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:34:32 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/24 16:54:34 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog default constructor has been called" << std::endl;
}

/*Whenever we call the copy constructor in a class if that class
ihnerites some other class we have to call it's copy constructor*/
Dog::Dog(const Dog& other) : Animal(other)
{
	*this = other;

	std::cout << "Dog copy constructor has been called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor has been called" << std::endl;
}

Dog& Dog::operator = (const Dog& other)
{
	this->type = other.type;

	std::cout << "Dog copy constructor has been called" << std::endl;
	return (*this);
}
