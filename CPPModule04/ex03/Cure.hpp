/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:52:59 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/26 12:44:17 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : virtual public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure& other);
	Cure& operator = (const Cure& other);
	virtual Cure*	clone() const;
	virtual void	use(ICharacter& target);
};

#endif
