/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:50:26 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/17 21:53:30 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int	numberZombies = 3;	
	Zombie *zombie = zombieHorde(numberZombies, "Heap");

	for (int i = 0; i < numberZombies; i++)
		zombie[i].announce();
	
	delete [] zombie;
	return (0);
}
