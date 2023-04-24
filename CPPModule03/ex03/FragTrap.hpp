/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:54:34 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/24 13:38:29 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

/*Use virtual inheritance
Virtual inheritance is used to avoid multiple copies of the base class
when there are multiple inheritance paths to the same base class.
*/
class FragTrap : virtual public ClapTrap
{
private:

public:
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	FragTrap();
	~FragTrap();
	FragTrap& operator = (const FragTrap& other);
	void	highFiveGuys();
};


#endif
