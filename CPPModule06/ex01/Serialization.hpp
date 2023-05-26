/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:29:07 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/26 17:55:15 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

/*https://www.geeksforgeeks.org/reinterpret_cast-in-c-type-casting-operators/*/

/*Respective:
It takes a pointer and converts it to the unsigned integer type uintptr_t.
It takes an unsigned integer parameter and converts it to a pointer to Data.
*/

#include <Data.hpp>

class Serialization
{
private:
	Serialization();

public:
	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
	~Serialization();
};

#endif
