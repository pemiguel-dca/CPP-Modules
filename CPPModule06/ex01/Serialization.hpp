/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:29:07 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/26 22:15:18 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

/*https://www.geeksforgeeks.org/reinterpret_cast-in-c-type-casting-operators/*/

/*In C++ there's no such thing as a static class keyword, the best approach to achieve a similiar
behaviour by making all members of the class static*/

#include "Data.hpp"

class Serialization
{
private:
	Serialization();
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
	~Serialization();
};

#endif
