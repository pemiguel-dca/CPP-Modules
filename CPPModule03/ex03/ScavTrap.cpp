/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:20:40 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/29 12:13:35 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*Since the members of ClapTrap are protected we can modify those values through the class the inherites her*/
ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap Params Constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Default Destructor has been called" << std::endl;
}

/*Copy current ClapTrap object to other*/
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;

	*this = other;
	std::cout << "ScavTrap Copy Constructor has been called";
}

ScavTrap&ScavTrap::operator = (const ScavTrap& other)
{
	ClapTrap::operator=(other);

	std::cout<< "ScavTrap Copy assignment operator has been called" << std::endl;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks "
					<< target << ", causing " << this->attackDamage
					<< " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	else
		std::cout << "Can't attack" << std::endl;
}
