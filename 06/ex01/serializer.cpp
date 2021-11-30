/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:16:40 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/26 17:21:15 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>

typedef struct s_data {
	int a;
	int b;
	int c;
}				Data;

uintptr_t serialize(Data * d) {
	return (reinterpret_cast<uintptr_t>(d));
}

Data * deserialize(uintptr_t i) {
	return (reinterpret_cast<Data *>(i));
}

int main() {
	Data * d = new Data;
	Data * e = deserialize(serialize(d));
	if (d == e)
		std::cout << "Success!" << std::endl;
	else
		std::cout << "Failure!" << std::endl;
}

