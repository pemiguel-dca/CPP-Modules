/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:36:42 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/26 15:43:26 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::~Ice()
{
}

Ice*	Ice::clone() const
{
	return (new Ice(*this));
}

Ice::Ice(const Ice& other) : AMateria("ice")
{
	*this = other;
}

Ice& Ice::operator = (const Ice& other)
{
	AMateria::operator=(other);
	return (*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
