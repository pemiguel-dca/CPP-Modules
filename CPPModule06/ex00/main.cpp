/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:06:42 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/02 12:46:36 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string	sLiteral = argv[1];
		ScalarConverter::convert(sLiteral);
	}
	else
		std::cerr << "Invalid arguments!" << std::endl;
}
