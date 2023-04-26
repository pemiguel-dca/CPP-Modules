/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:22:55 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/26 15:41:50 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const& type) : type (type)
{
}

AMateria& AMateria::operator = (const AMateria &other)
{
	this->type = other.type;

	return (*this);
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

const std::string& AMateria::getType() const
{
	return (this->type);
}

AMateria* AMateria::clone() const
{
	return (AMateria*)this;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}
