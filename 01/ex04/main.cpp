/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:11:07 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/05 15:30:58 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
	std::string file;
	std::string filename;
	std::string s1;
	std::string s2;

	if (argc != 4)
	{
		std::cout << "Please provide file name, string to be replaced and replacement string" << std::endl;
		return 1;
	}

	filename = argv[1];
	std::ifstream infile(filename);
	if (infile.fail())
		return 1;
	s1 = argv[2];
	s2 = argv[3];

	std::stringstream buffer;
	buffer << infile.rdbuf();
	file = buffer.str();
	infile.close();

	for (size_t pos = 0; (pos = file.find(s1, pos)) != std::string::npos; pos++)
	{
		file.erase(pos, s1.length());
		file.insert(pos, s2);
	}

	std::ofstream outfile(filename + ".replace");
	outfile << file;
	outfile.close();
}
