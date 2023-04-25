/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:19:57 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/25 12:45:52 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include "Animal.hpp"

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal (const WrongAnimal& other);
	WrongAnimal& operator = (const WrongAnimal& other);
	virtual ~WrongAnimal();
	void	makeSound() const;
	std::string	getType() const;
};

#endif
