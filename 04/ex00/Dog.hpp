/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:22:11 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 17:20:52 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public:

		/* Constructors and destructors */

		Dog();
		Dog(const Dog & copy);
		~Dog();

		/* Member functions */

		void makeSound() const;

		/* Setters end Getters */


		/* Operator overloads */

		Dog & operator=(const Dog & rhs);

	private:
		
		/* Member variables */


};

#endif
