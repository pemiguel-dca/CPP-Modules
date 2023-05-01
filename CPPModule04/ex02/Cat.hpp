/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:41:15 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/01 12:46:59 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

#define NUM_ANIMALS 10

class Cat : public Animal, Brain
{
private:
	Brain	*brain;
public:
	Cat();
	Cat(const Cat& other);
	virtual ~Cat();
	virtual void	makeSound() const;
	Cat &operator = (const Cat& other);
};

#endif

