/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:04:49 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/29 17:40:31 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	var("Pedro");
	FragTrap	var2;

	var.takeDamage(2);
	var.beRepaired(5);

	std::cout << "ClapTrap " << var.getName() << " as "
				<< var.getHitPoints() << " hitPoints " << std::endl;
	var.highFiveGuys();
}
