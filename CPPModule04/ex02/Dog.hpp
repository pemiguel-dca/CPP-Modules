/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:33:34 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/25 14:17:10 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

/*
Virtual Destructors
This makes sure that the correct destructor is called
when a derived class object is deleted through a pointer to the base class.
*/

/*
The virtual keyword before 'void makeSound() const' indicates that this function
is a virtual function that can be overridden by derived classes
*/

class Dog : public Animal, Brain
{
private:
	Brain	*brain;
public:
	Dog();
	Dog(const Dog& other);
	virtual ~Dog();
	virtual void	makeSound() const;
	Dog &operator = (const Dog& other);
};

#endif
