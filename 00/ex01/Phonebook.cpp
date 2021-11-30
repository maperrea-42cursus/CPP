/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:13:00 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/25 16:42:08 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

Phonebook::Phonebook()
{
	total_contacts = 0;
	last_contact = 7;
}

Phonebook::~Phonebook() {}

void Phonebook::add(Contact new_contact)
{
	last_contact++;
	if (last_contact == 8)
		last_contact = 0;
	contacts[last_contact] = new_contact;
	if (total_contacts < 8)
		total_contacts++;
}

void Phonebook::add()
{
	Contact new_contact;
	std::string input;

	std::cout << "First name: ";
	std::getline(std::cin, input);
	new_contact.set_first_name(input);
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	new_contact.set_last_name(input);
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	new_contact.set_nickname(input);
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	new_contact.set_phone_number(input);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	new_contact.set_secret(input);
	add(new_contact);
}

std::string Phonebook::get_10(std::string str)
{
	int len = str.length();

	if (len > 10)
		return (str.substr(0, 9) + ".");
	else
		return (std::string((10 - len), ' ') + str);
}

void Phonebook::search()
{
	int index = 0;
	std::string input;

	if (!total_contacts)
	{
		std::cout << "No saved contacts yet\n";
		return ;
	}

	for (int i = 0; i < total_contacts; i++)
	{
		std::cout << i + 1
			<< "|" << get_10(contacts[i].get_first_name())
			<< "|" << get_10(contacts[i].get_last_name())
			<< "|" << get_10(contacts[i].get_nickname()) << "\n";
	}

	std::cout << "Please the id of the contact you wish to see: ";
	std::getline(std::cin, input);
	index = std::atoi(input.c_str());
	while (input.find_first_not_of("0123456789") != std::string::npos || index < 1 || index > total_contacts)
	{
			std::cout << "Please enter a valid id [1-" << total_contacts << "] : ";
			std::getline(std::cin, input);
			index = std::atoi(input.c_str());
	}
	contacts[index - 1].show();
}

void	Phonebook::interface()
{
	std::string input;

	std::cout << "Welcome to your Phonebook!\n";
	while (1)
	{
		std::cout << "Please enter one of the following commands: [ ADD | SEARCH | EXIT ]\n> ";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			add();
		else if (!input.compare("SEARCH"))
			search();
		else if (!input.compare("EXIT"))
			break;
		else
			std::cout << "Sorry, I don't understand what you mean\n";
		std::cout << std::endl;
	}
	std::cout << "Thanks for using my services!" << std::endl;
}
