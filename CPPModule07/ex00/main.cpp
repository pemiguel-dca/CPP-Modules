/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:45:46 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/27 21:55:26 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

/*Don't need to especify type when calling template function*/

int main()
{
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::string	s1 = "so shall you reap";
	std::string	s2 = "as you sow";

	swap(s1, s2);

	std::cout << "s1 (now s2): " << s1 << std::endl;
	std::cout << "s2 (now s1): " << s2 << std::endl;

	/*
	ERROR CASE
	min(n1, s2);
	*/
	return (0);
}