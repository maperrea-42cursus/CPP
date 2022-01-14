/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:08:41 by maperrea          #+#    #+#             */
/*   Updated: 2021/12/01 17:55:28 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
	MateriaSource * src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	MateriaSource * src2 = new MateriaSource(*src);
	ICharacter * me = new Character("me");
	AMateria * tmp;

	delete src;
	if ((tmp = src2->createMateria("ice")))
		me->equip(tmp);
	if ((tmp = src2->createMateria("cure")))
		me->equip(tmp);
	if ((tmp = src2->createMateria("unknown")))
		me->equip(tmp);
	ICharacter * bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	delete bob;
	delete me;
	delete src2;

	return 0;
}
