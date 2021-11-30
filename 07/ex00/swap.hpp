/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:51:25 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/30 17:54:57 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
# define SWAP_HPP

template<typename T>
void swap(T & a, T & b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

#endif
