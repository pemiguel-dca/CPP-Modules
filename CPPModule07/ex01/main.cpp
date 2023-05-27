/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:58:42 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/27 22:34:15 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int	int_array[] = {31, 354, 98 ,13};
	size_t size = sizeof(int_array) / sizeof(int_array[0]);
	iter(int_array, size, &one_up);

	std::cout << std::endl;

	char	char_array[] = "ld";
	size = sizeof(char_array) / sizeof(char_array[0]) - 1;// para tirar o nulo
	iter(char_array, size, &one_up);

	std::cout << std::endl;

	double	double_array[] = {31.31, 354.1, 98.32 ,13.0};
	size = sizeof(double_array) / sizeof(double_array[0]);
	iter(double_array, size, &one_up);

	
}