/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:58:47 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/30 18:18:16 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void iter(T * arr, size_t n, void (*f)(T & elem)) {
	for (size_t i = 0; i < n; i++)
		f(arr[i]);
}

#endif
