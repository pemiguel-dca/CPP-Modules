/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:54:23 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/24 13:18:05 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdio>

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor has been called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Default Destructor has been called" << std::endl;
}

/*Use params constructor of ClapTrap*/
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Params Constructor has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy Constructor has been called";
}

FragTrap& FragTrap::operator = (const FragTrap& other)
{
	ClapTrap::operator=(other);

	std::cout << "FragTrap Copy assignement operator has been called" << std::endl;
	return (*this);
}

void	FragTrap::highFiveGuys()
{
	std::string	answer;

	std::cout << "Do you want an I five? ";
	getline(std::cin, answer);

	if (!(answer.compare("yes")))
		std::cout << "HIGH FIVE!" << std::endl;
	else
		std::cout << "K BYE!" << std::endl;
	clearerr(stdin);
	std::cin.clear();
}
