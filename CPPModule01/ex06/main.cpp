/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:38:13 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/19 14:22:11 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdio>

int main(int argc, char **argv)
{
	Harl		guy;

	if (argc == 2)
	{
		const std::string	&level = argv[1];
		guy.complain(level);
		
	}
	else
		std::cout << "Not enough arguments";
	return (0);
}
