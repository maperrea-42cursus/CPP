/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:22:10 by maperrea          #+#    #+#             */
/*   Updated: 2021/12/08 11:08:42 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:

		/* Constructors and destructors */

		Cat();
		Cat(const Cat & copy);
		virtual ~Cat();

		/* Member functions */

		void makeSound() const;

		/* Setters end Getters */

		Brain * getBrain() const;

		/* Operator overloads */

		Cat & operator=(const Cat & rhs);

	private:
		
		/* Member variables */

		Brain* brain;

};

#endif
