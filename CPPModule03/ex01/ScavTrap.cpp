/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:20:40 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/22 17:56:33 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Params ScavTrap Constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Default ScavTrap Destructor" << std::endl;
}

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
