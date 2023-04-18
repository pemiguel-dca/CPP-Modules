/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:00:12 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/18 17:23:47 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

/*In this case we use pointer because as the subject says "HumanB may not always have a Weapon"
so we use a pointer, because pointer can be NULL but a reference can't
*/

class HumanB
{
private:
	std::string	name;
	Weapon	*weapon;
public:
	void	setWeapon(Weapon &weapon);
	void	attack() const;
	HumanB(std::string name);
	~HumanB();
};

#endif
