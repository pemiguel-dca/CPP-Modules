/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:11:43 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/24 12:44:40 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);
	ScavTrap();
	~ScavTrap();
	ScavTrap& operator = (const ScavTrap& other);
	void	guardGate();
};

#endif
