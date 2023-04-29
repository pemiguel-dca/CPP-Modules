/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:11:43 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/29 12:20:36 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
private:

public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);
	ScavTrap();
	~ScavTrap();
	ScavTrap& operator = (const ScavTrap& other);
	void	attack(const std::string& target);
	void	guardGate();
};

#endif
