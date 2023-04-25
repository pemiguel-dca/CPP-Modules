/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:49:30 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/25 12:57:56 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor has been called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor has been called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;

	std::cout << "Brain copy constructor has been called" << std::endl;
}

Brain& Brain::operator = (const Brain& other)
{
	for (size_t i = 0; this->ideas[i].npos; i += 1)
		this->ideas[i] = other.ideas[i];

	std::cout << "Brain copy assignment operator has been called" << std::endl;
	return (*this);
}
