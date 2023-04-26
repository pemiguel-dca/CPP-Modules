/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 21:51:52 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/25 23:04:41 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Character.hpp"

class MateriaSource : virtual public IMateriaSource
{
protected:
	AMateria	*inventoryAMateria[4];
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator = (const MateriaSource& other);
	void		learnMateria(AMateria*);
	AMateria	*createMateria(std::string const& type);
};

#endif