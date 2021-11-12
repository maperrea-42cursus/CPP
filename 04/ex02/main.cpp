/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:18:02 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/12 18:04:08 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	Animal *zoo[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
		zoo[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
		delete zoo[i];
	Cat cat;
	Cat clone(cat);
	if (cat.getBrain() == clone.getBrain())
		std::cout << "\nShallow copy\n" << std::endl;
	else
		std::cout << "\nDeep copy\n" << std::endl;
	Animal test_subject;
}
