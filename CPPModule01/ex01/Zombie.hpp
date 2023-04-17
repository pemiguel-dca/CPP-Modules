/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:44:08 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/17 21:32:18 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
private:
	std::string	name;

public:
	void		announce();
	void		setName(std::string name);
	Zombie();
	~Zombie();
};

Zombie	*zombieHorde(int N, std::string name);

#endif
