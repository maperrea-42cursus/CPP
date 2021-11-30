/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:23:48 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/26 17:41:34 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <time.h>

class Base {
	public :
		Base() { } ;
		virtual ~Base() { } ;
};

class A : public Base {
	public:
		A() { } ;
		~A() { } ;
};

class B : public Base {
	public:
		B() { } ;
		~B() { } ;
};

class C : public Base {
	public:
		C() { } ;
		~C() { } ;
};

Base * generate() {
	srand(time(NULL));

	int random = rand() % 3;

	switch(random) {
		case 0:
			std::cout << "generated A" << std::endl;
			return new A;
		case 1:
			std::cout << "generated B" << std::endl;
			return new B;
		case 2:
			std::cout << "generated C" << std::endl;
			return new C;
	}
	std::cout << "generation failed" << std::endl;
	return NULL;
}

void identify(Base * base) {
	A * a = dynamic_cast<A *>(base);
	B * b = dynamic_cast<B *>(base);
	C * c = dynamic_cast<C *>(base);

	if (a)
		std::cout << "A" << std::endl;
	else if (b)
		std::cout << "B" << std::endl;
	else if (c)
		std::cout << "C" << std::endl;
	else
		std::cout << "identification failed" << std::endl;
}

void identify(Base & base) {
	try {
		(void)dynamic_cast<A &>(base);
		std::cout << "A" << std::endl;
		return;
	} catch (std::exception & e) { }

	try {
		(void)dynamic_cast<B &>(base);
		std::cout << "B" << std::endl;
		return;
	} catch (std::exception & e) { }

	try {
		(void)dynamic_cast<C &>(base);
		std::cout << "C" << std::endl;
		return;
	} catch (std::exception & e) { }

	std::cout << "identification failed" << std::endl;
}

int main() {
	Base * base = generate();
	identify(base);
	identify(*base);
}
