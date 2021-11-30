/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:57:12 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/30 17:57:34 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_HPP
# define MAX_HPP

template<typename T>
T & max(T & a, T & b)
{
	if (a > b)
		return a;
	return b;
}

#endif
