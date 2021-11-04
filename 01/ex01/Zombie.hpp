/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:02:45 by maperrea          #+#    #+#             */
/*   Updated: 2021/10/28 16:32:16 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void announce();
		void set_name(std::string name);

	private:
		std::string name;

};

#endif
