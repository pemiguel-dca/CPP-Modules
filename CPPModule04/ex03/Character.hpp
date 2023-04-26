/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:57:05 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/25 23:05:14 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include <string>
#include "ICharacter.hpp"

class Character : virtual public ICharacter
{
private:
	std::string	name;
	AMateria	*inventory[4];
public:
	Character();
	~Character();
	Character(std::string name);
	Character(const Character &other);
	Character& operator = (const Character &other);
	std::string const&	getName() const;
	virtual void	equip(AMateria* m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);
};

#endif
