/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:46:42 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/26 17:14:51 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdlib.h>

void	from_char(std::string & str) {
	std::cout << "CHAR" <<std::endl;
	char c = str.at(0);
	std::cout << "char: '" << c << "'" << std::endl;

	std::cout << "int: " << static_cast<int>(c) << std::endl;

	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;

	std::cout << "double: " << static_cast<double>(c) <<  std::endl;
}

void	from_int(std::string & str) {
	std::cout << "INT" <<std::endl;
	int i = std::atoi(str.c_str());

	std::cout << "char: ";
	if (i >= 32 && i <= 126)
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	else if (i >= -128 && i <= 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "Impossible" << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) <<  std::endl;
}

void	from_float(std::string & str) {
	std::cout << "FLOAT" <<std::endl;
	float f = static_cast<float>(std::atof(str.c_str()));

	std::cout << "char: ";
	if (f != static_cast<char>(f))
		std::cout << "Impossible" << std::endl;
	else if (f >= 32 && f <= 126)
		std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int: ";
	if (f != static_cast<int>(f))
		std::cout << "Impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
	
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	from_double(std::string & str) {
	std::cout << "DOUBLE" <<std::endl;
	double d = std::atof(str.c_str());

	std::cout << "char: ";
	if (d != static_cast<char>(d))
		std::cout << "Impossible" << std::endl;
	else if (d >= 32 && d <= 126)
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int: ";
	if (d != static_cast<int>(d))
		std::cout << "Impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
	
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

int main(int argc, char **argv) {
	for (int i = 1; i < argc; i++) {
		std::string str = argv[i];
		if (str.size() == 1 && (str.at(0) < '0' || str.at(0) > '9')) {
			from_char(str);
		} else {
			std::string no_sign;
			if (str.at(0) == '-' || str.at(0) == '+')
				no_sign = str.substr(1, str.size() - 1);
			else
				no_sign = str;
			if (no_sign.size() <= 10 && no_sign.find_first_not_of("0123456789") == std::string::npos)
				from_int(str);
			else if (no_sign.find_first_not_of("0123456789.") == std::string::npos
					|| !no_sign.compare("nan") || !no_sign.compare("inf"))
				from_double(str);
			else if (no_sign.find_first_not_of("0123456789.f") == std::string::npos
					|| !no_sign.compare("nanf") || !no_sign.compare("inff"))
				from_float(str);
			else
				std::cout << "Not a valid input" << std::endl;
		}
	}
}
