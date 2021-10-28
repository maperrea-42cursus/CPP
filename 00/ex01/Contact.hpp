/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:24:34 by maperrea          #+#    #+#             */
/*   Updated: 2021/10/28 13:22:29 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact{
	public:
		Contact();
		Contact(std::string first_name, std::string last_name,
			std::string nickname, std::string phone_number, std::string secret);
		~Contact();

		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_secret();

		void set_first_name(std::string str);
		void set_last_name(std::string str);
		void set_nickname(std::string str);
		void set_phone_number(std::string str);
		void set_secret(std::string str);
		void show();

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _secret;
};
#endif
