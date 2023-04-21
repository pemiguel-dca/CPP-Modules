/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:00:04 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/21 22:16:11 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int main()
{
	Point a(0.0f, 0.0f);
	Point b(2.0f, 0.0f);
	Point c(1.0f, 2.0f);

	// Point inside the triangle
	Point inside1(1.0f, 1.0f);
	if (bsp(a, b, c, inside1)) {
		std::cout << "Inside 1: The point is inside the triangle" << std::endl;
	}
	else {
		std::cout << "Inside 1: The point is not inside the triangle" << std::endl;
	}

	// Point outside the triangle
	Point outside1(1.0f, 3.0f);
	if (bsp(a, b, c, outside1)) {
		std::cout << "Outside 1: The point is inside the triangle" << std::endl;
	}
	else {
		std::cout << "Outside 1: The point is not inside the triangle" << std::endl;
	}

	// Point on the edge of the triangle
	Point on_edge1(1.0f, 0.0f);
	if (bsp(a, b, c, on_edge1)) {
		std::cout << "On edge 1: The point is inside the triangle" << std::endl;
	}
	else {
		std::cout << "On edge 1: The point is not inside the triangle" << std::endl;
	}
	return (0);
}