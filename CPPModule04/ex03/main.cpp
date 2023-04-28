/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:22:10 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/27 12:24:21 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	std::string strMe = "me";
	std::string strBob = "bob";
	std::string strCure = "cure";
	std::string strIce = "ice";

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character(strMe);
	AMateria* tmp;
	tmp = src->createMateria(strIce);
	me->equip(tmp);
	tmp = src->createMateria(strCure);
	me->equip(tmp);
	ICharacter* bob = new Character(strBob);
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}

