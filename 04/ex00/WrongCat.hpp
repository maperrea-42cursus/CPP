/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:26:28 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 17:27:14 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:

		/* Constructors and destructors */

		WrongCat();
		WrongCat(const WrongCat & copy);
		~WrongCat();

		/* Member functions */

		void makeSound() const;

		/* Setters end Getters */


		/* Operator overloads */

		WrongCat & operator=(const WrongCat & rhs);

	private:
		
		/* Member variables */


};

#endif
