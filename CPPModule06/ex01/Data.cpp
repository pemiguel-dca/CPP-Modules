/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:23:43 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/05 17:28:41 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(std::string name, int age) : name(name), age(age)
{
}

Data::~Data()
{
}

Data::Data(const Data& other)
{
	*this = other;
}

Data& Data::operator = (const Data& other)
{
	this->name = other.name;
	this->age = other.age;

	return (*this);
}
