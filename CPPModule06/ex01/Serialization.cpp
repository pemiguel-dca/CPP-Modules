/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:30:03 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/26 17:58:54 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization()
{
}

Serialization::~Serialization()
{
}

uintptr_t serialize(Data* ptr)
{
	uintptr_t	convert = reinterpret_cast<uintptr_t>(ptr);
	return (convert);
}

Data* deserialize(uintptr_t raw)
{
	Data	*convert = reinterpret_cast<Data *>(raw);
	return (convert);
}
