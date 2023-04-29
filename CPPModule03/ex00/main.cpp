/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:04:49 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/29 11:42:07 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	var("Pedro");

	var.attack("Someone");
	var.takeDamage(11);
	var.attack("Someone");
	var.beRepaired(5);

	std::cout << "ClapTrap " << var.getName() << " as "
				<< var.getHitPoints() << " hitPoints " << std::endl;


}
