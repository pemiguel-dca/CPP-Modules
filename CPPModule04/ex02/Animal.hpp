/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:20:22 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/25 14:13:01 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

/*
A class that that should not be instantiable means that you should not be
able to create an object type 'Animal' directly, because 'Animal' is an abstract class

Abstract class
An abstract class is a class that cannot be instantiated on its own,
but can be used as a base class to derive other classes
An abstract class is defined by having at least one pure virtual function

Pure virtual function
A pure virtual function is a virtual function that has no implementation
in the base class and must be overridden by any derived classes.

Now that 'makeSound' function is pure virtual any class derived from 'Animal'
must implement it's own version of 'makeSound()'.
Therefore, now we can only create objects of classes that are derived from 'Animal',
not of 'Animal' itself
*/

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
	virtual void	makeSound() const = 0;//pure virtual function
};

#endif

