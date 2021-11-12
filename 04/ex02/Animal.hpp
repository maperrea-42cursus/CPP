/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:22:10 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/12 18:03:44 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {
	public:

		/* Constructors and destructors */

		Animal();
		Animal(std::string const & type);
		Animal(const Animal & copy);
		virtual ~Animal();

		/* Member functions */

		virtual void makeSound() const = 0;

		/* Setters end Getters */

		std::string getType() const;


		/* Operator overloads */

		Animal & operator=(const Animal & rhs);

	protected:
		
		/* Member variables */

		std::string type;

};

#endif
