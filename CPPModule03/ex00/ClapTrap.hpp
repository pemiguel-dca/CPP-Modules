/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:14:22 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/22 13:23:05 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	name;
	int	hitPoints;
	int	energyPoints;
	int	attackDamage;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	~ClapTrap();
	ClapTrap& operator = (const ClapTrap& other);
	int		getHitPoints();
	std::string		getName();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
