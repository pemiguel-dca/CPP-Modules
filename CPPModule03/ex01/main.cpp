/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:04:49 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/24 13:14:51 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	var("Pedro");
	ScavTrap	var2;

	var.attack("Someone");
	var.takeDamage(2);
	var.beRepaired(5);
	var.guardGate();

	std::cout << "ClapTrap " << var.getName() << " as "
				<< var.getHitPoints() << " hitPoints " << std::endl;
}
