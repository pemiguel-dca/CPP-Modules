/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:26:53 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/24 15:12:11 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*Call both default constructors*/
DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	std::cout << "Diamond Default Constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "Diamond Params Constructor has been called" << std::endl;
}

/*Upper cast -> atributing parents classes it's own values*/
DiamondTrap::DiamondTrap(const DiamondTrap& other)
: ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	*this = other;
	std::cout << "Diamond Copy Constructor has been called" << std::endl;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& other)
{
	ClapTrap::name = (this->name + "_clap_name");
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;

	std::cout << "Diamond Copy assignment operator has been called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Default Destructor has been called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond's name:" << this->name << std::endl;
	std::cout << "ClapTrap's name:" << ClapTrap::name << std::endl;
}
