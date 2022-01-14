#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T> class MutantStack : public std::stack<T> {
	public:

		typedef typename std::stack<T>::container_type::iterator iterator;

		/* Constructors and destructors */

		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack & copy) : std::stack<T>(copy) {};
		~MutantStack() {};

		/* Member functions */

		iterator begin() {
			return this->c.begin();
		};

		iterator end() {
			return this->c.end();
		};

		/* Setters and Getters */


		/* Operator overloads */

		MutantStack & operator=(const MutantStack & rhs) {
			this->c = rhs.c;
			return *this;
		};

	private:
		
		/* Member variables */


};

#endif
