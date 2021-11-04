/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:33:34 by maperrea          #+#    #+#             */
/*   Updated: 2021/10/28 18:38:49 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPOM_HPP
# define WEAPOM_HPP

#include <string>

class Weapon {
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		const std::string& getType();
		void setType(std::string type);

	private:
		std::string type;

};

#endif
