/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:36:19 by maperrea          #+#    #+#             */
/*   Updated: 2021/10/28 13:16:56 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
}

Contact::Contact(std::string first_name, std::string last_name,
				std::string nickname, std::string phone_number, std::string secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_secret = secret;
}

Contact::~Contact()	{}

void Contact::show()
{
	std::cout << "First name: " << _first_name << std::endl;
	std::cout << "last name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phone_number << std::endl;
	std::cout << "Darkest secret: " << _secret << std::endl;
}

std::string Contact::get_first_name()
{
	return (_first_name);
}

std::string Contact::get_last_name()
{
	return (_last_name);
}

std::string Contact::get_nickname()
{
	return (_nickname);
}

std::string Contact::get_phone_number()
{
	return (_phone_number);
}

std::string Contact::get_secret()
{
	return (_secret);
}

void Contact::set_first_name(std::string str)
{
	_first_name = str;
}

void Contact::set_last_name(std::string str)
{
	_last_name = str;
}

void Contact::set_nickname(std::string str)
{
	_nickname = str;
}

void Contact::set_phone_number(std::string str)
{
	_phone_number = str;
}

void Contact::set_secret(std::string str)
{
	_secret = str;
}
