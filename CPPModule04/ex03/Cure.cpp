/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:53:54 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/26 15:43:48 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::~Cure()
{
}

Cure*	Cure::clone() const
{
	return (new Cure(*this));
}

Cure::Cure(const Cure& other) : AMateria("cure")
{
	*this = other;
}

Cure& Cure::operator = (const Cure& other)
{
	AMateria::operator=(other);
	return (*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
