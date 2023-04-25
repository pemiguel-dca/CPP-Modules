/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:42:04 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/25 13:30:45 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->brain = new Brain(); //deep copy
	this->type = "Cat";
	std::cout << "Cat default constructor has been called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	*this = other;

	std::cout << "Cat copy constructor has been called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor has been called" << std::endl;

	delete this->brain;
}

Cat& Cat::operator = (const Cat& other)
{
	this->type = other.type;

	std::cout << "DoCatg copy constructor has been called" << std::endl;
	return (*this);
}
