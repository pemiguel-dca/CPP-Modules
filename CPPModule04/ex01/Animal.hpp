/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:20:22 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/25 13:02:56 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

/*
Using virtual destructors:
When a class has a virtual destructor, it ensures that the destructor
of the derived class is called when deleting an object through a base class pointer.
*/

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal &other);
	Animal& operator = (const Animal& other);
	virtual ~Animal();
	std::string	getType() const;
	void	makeSound() const;
};

#endif

