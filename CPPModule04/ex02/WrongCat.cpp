/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:27:04 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/24 16:51:51 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "Dog";
	std::cout << "WrongCat default constructor has been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	*this = other;

	std::cout << "WrongCat copy constructor has been called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor has been called" << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat& other)
{
	this->type = other.type;

	std::cout << "DoCatg copy constructor has been called" << std::endl;
	return (*this);
}
