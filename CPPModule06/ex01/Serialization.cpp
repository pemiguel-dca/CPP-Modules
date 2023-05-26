/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:30:03 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/26 22:16:02 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

/*reinterpret_cast is a powerful casting operator that allows you to reinterpret the binary representation of objects
Although it should be avoided for safety reasons, since it can cause some undefined behaviour*/


Serialization::Serialization()
{
}

Serialization::~Serialization()
{
}

uintptr_t Serialization::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialization::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
