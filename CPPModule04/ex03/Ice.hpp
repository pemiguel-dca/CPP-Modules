/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:35:40 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/25 16:22:21 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : virtual public AMateria
{
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice& other);
	Ice& operator = (const Ice& other);
	virtual Ice*	clone() const;
	virtual void	use(ICharacter& target);
};




#endif
