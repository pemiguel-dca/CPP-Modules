/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 21:51:13 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/26 15:36:19 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i += 1)
		inventoryAMateria[i] = NULL;
	std::cout << "MateriaSource default constructor has been called" << std::endl;

}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i += 1)
		if (this->inventoryAMateria[i])
			delete [] this->inventoryAMateria[i];
	std::cout << "MateriaSource has been destroyed" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;

	std::cout << "MateriaSource copy constructor has been called";
}

MateriaSource& MateriaSource::operator = (const MateriaSource& other)
{
	for (size_t i = 0; i < 4; i += 1)
	{
		delete [] other.inventoryAMateria[i];
		this->inventoryAMateria[i] = other.inventoryAMateria[i];
	}
	std::cout << "MateriaSource copy assignment operator has been called" << std::endl;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* to_learn)
{
	static size_t	i = 0;

	inventoryAMateria[i] = to_learn;
	i += 1;
	if (i == 4)
		std::cout << "Inventory of Materia is full!" << std::endl;
	else if (i < 4)
	{
		std::cout << "You just add a Materia object to your inventory!" << std::endl;
		std::cout << "Your inventory has " << i << " objects" << std::endl;
	}
}

AMateria * MateriaSource::createMateria(std::string const& type)
{
	AMateria *res = NULL;
	for (size_t i = 0; i < 4; i += 1)
	{
		if (this->inventoryAMateria[i] && this->inventoryAMateria[i]->getType().compare(type) == 0)
		{
			res = this->inventoryAMateria[i]->clone();
			break;
		}
	}
	return (res);
}
