/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:03:17 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/26 21:41:48 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

/*
uintptr_t is an unsigned integer type that is capable of storing a data pointer (whether it can hold a function pointer is unspecified). \
Which typically means that it's the same size as a pointer.
*/

class Data
{
private:
	std::string name;
public:
	Data(std::string name);
	Data(const Data& other);
	Data& operator=(const Data& other);
	std::string getName();
	~Data();
};

#endif
