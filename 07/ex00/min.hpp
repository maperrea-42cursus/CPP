/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:55:18 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/30 17:56:49 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_HPP
# define MIN_HPP

template<typename T>
T & min(T & a, T & b)
{
	if (a > b)
		return b;
	return a;
}

#endif
