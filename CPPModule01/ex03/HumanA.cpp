/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:55:06 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/18 13:04:03 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*<name> attacks with their <weapon type>*/

/*initializer list -> directly initializes the member variables of a class*/
HumanA::HumanA( std::string name, Weapon& weapon ) : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack() const
{
	if (this->weapon.getType().empty())
	{
		std::cout << "You don't possess a weapon" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}