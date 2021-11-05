/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:38:28 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/05 17:02:59 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class Karen {
	public:
		Karen();
		~Karen();

		void complain(std::string level);

	private:
		void debug();
		void info();
		void warning();
		void error();
};

#endif
