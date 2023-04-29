/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:20:40 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/29 11:54:15 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap::ClapTrap()
{
	std::cout << "ScavTrap Default Constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Params Constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Default Destructor has been called" << std::endl;
}

/*Copy current ClapTrap object to other*/
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
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
