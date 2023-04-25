/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:10:46 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/25 16:42:06 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
The inventory is empty at construction!
Every copy (assignment or constructor) should be a deep copy.
During copy, the Materias of a Character must be deleted before the new ones are added
to their inventory. Of course, the Materias must be deleted when a Character is destroyed
*/

Character::Character()
{
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i += 1)
		delete [] this->inventory[i];
	std::cout << "Character " << this->name << " was destroyed" << std::endl;
}

Character::Character(std::string name) : name (name)
{
	for (size_t i = 0; i < 4; i += 1)
		this->inventory[i] = NULL;
	std::cout << "Character " << this->name << " was created!" << std::endl;
}

Character& Character::operator = (const Character& other)
{
	this->name = other.name;
	for (size_t i = 0; i < 4; i += 1)
	{
		delete [] other.inventory[i]; //make sure the old memory gets freed before assigning the new one
		this->inventory[i] = other.inventory[i];
	}

	return (*this);
}

Character::Character(const Character& other)
{
	*this = other;
}

const std::string& Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	size_t i = 0;

	for (i; i < 4; i += 1)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break ;
		}
	}
	if (i == 4)
		std::cout << "At the moment inventory is full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->inventory[idx] == )

	}
	else
		std::cout << ""
}
