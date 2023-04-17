/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:39:57 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/17 21:53:22 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

/*
Differences between pointers and references:

Syntax: A reference is declared using the '&' symbol, while a pointer is declared using the '*' symbol.

Nullability: A pointer can be assigned the value 'NULL', while a reference cannot be null. This means that a pointer can be used to indicate the absence of a value, while a reference always refers to a valid object.

Memory allocation: A pointer can be dynamically allocated using the 'new' keyword, while a reference must always refer to an existing object.

Assignment: A reference cannot be re-assigned to refer to a different object after it has been initialized, while a pointer can be re-assigned to point to a different object at any time.

Indirection: A pointer must be dereferenced using the '*' operator to access the value of the object it points to, while a reference can be used directly to access the value of the object it refers to.
*/

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_ptr = &str;
	std::string &str_ref = str;

	std::cout << &str << std::endl;
	std::cout << str_ptr << std::endl;
	std::cout << &str_ref << std::endl;

	std::cout << str << std::endl;
	std::cout << *str_ptr << std::endl;
	std::cout << str_ref << std::endl;

	return (0);
}