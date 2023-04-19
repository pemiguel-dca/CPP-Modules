/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:38:13 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/19 13:54:16 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdio>

void	info()
{
	std::cout << "Harl will complain with the following levels:" << std::endl;
	std::cout << "{DEBUG, INFO, WARNING, ERROR}" << std::endl;
	std::cout << "To exit the program press CTRL'D" << std::endl;
}

int main(void)
{
	Harl		guy;
	std::string	level;

	info();
	while (true)
	{
		std::cout << "Enter a level: ";
		getline(std::cin, level);
		if (std::cin.eof())
		{
			clearerr(stdin);
			break ;
		}
		guy.complain(level);
	}
	return (0);
}
