/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:56:47 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/24 14:18:03 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Params constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap Copy constructor has been called" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;

	std::cout << "ClapTrap Copy assignment operator has been called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor has been called" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= (unsigned int)this->hitPoints || this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		this->hitPoints = 0;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " got it with "
					<< amount << " points of damage!" << std::endl;
	}
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks "
					<< target << ", causing " << this->attackDamage
					<< " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	else
		std::cout << "Can't attack" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << name << " got repaired with "
					<< amount << " hitPoints" << std::endl;
		this->hitPoints += amount;
		this->energyPoints -= 1;
	}
	else
		std::cout << "There's no energy points to repair" << std::endl;
}

std::string	ClapTrap::getName() const
{
	return (this->name);
}

int		ClapTrap::getHitPoints() const
{
	return (this->hitPoints);
}
