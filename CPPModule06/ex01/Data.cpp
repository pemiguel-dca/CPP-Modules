/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:23:43 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/26 21:40:53 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(std::string name) : name(name)
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

	return (*this);
}

std::string Data::getName()
{
	return (this->name);
}