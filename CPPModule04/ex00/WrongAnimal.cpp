/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:21:32 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/24 16:51:19 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type ("Default")
{
	std::cout << "WrongAnimal default constructor has been called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;

	std::cout << "WrongAnimal copy constructor has been called" << std::endl;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& other)
{
	this->type = other.type;

	std::cout << "WrongAnimal copy assignment operator has been called" << std::endl;
	return (*this);
}
