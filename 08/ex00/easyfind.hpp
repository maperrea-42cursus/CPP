/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:33:59 by maperrea          #+#    #+#             */
/*   Updated: 2022/01/06 19:46:47 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>

template<typename T>
typename T::iterator easyfind(T & cont, int i) {
	typename T::iterator it;
	typename T::iterator ite = cont.end();

	for (it = cont.begin(); it != ite; it++) {
		if (*it == i)
			return it;
	}
	return cont.end();
}

#endif
