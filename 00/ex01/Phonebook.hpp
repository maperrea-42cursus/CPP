/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:17:07 by maperrea          #+#    #+#             */
/*   Updated: 2021/10/28 13:43:46 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class Phonebook {
	public:
		Phonebook();
		~Phonebook();

		void	add();
		void	add(Contact new_contact);
		void	search();
		void	interface();

	private:
		std::string	get_10(std::string str);

		int	total_contacts;
		int	last_contact;
		Contact contacts[8];
};

#endif
