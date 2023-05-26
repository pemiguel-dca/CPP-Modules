/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:59:04 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/26 22:03:59 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(int argc, char **argv)
{	
	if (argc != 2)
	{
		std::cerr << "Program MUST have ONE argument." << std::endl;
		return (1);
	}
	std::string	param(argv[1]);
	Data			*me = new Data(param);
	uintptr_t		raw;
	
	std::cout << "My name -> " << me->getName() << std::endl;
	raw = Serialization::serialize(me);
	std::cout << "My address -> " << me << std::endl;
	std::cout << "After serialize -> " << &raw << std::endl;
	
	me = Serialization::deserialize(raw);
	std::cout << "Me after deserializee (supost to be equal to my address) ->" << me << std::endl;
	
	delete me;
}
