/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:20:16 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/30 18:48:11 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>

template<typename T>
class Array {

	public:

		class ArrayOutOfBoundsException : public std::exception {
			virtual char const * what() const throw() {
				return "Array out of bounds exception";
			}
		};

		Array<T>() { _array = NULL; }
		Array<T>(unsigned int n) { _size = n; _array = new T[_size]; }
		Array<T>(Array<T> const & copy) { _array = NULL; *this = copy; }
		~Array<T>() { delete [] _array; };

		unsigned int size() const {
			return _size;
		}

		Array<T> & operator=(Array<T> const & rhs) {
			if (this == &rhs)
				return *this;
			if (_array)
				delete [] _array;
			_size = rhs.size();
			_array = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_array[i] = rhs[i];
			return *this;
		}

		T & operator[](int id) const throw(ArrayOutOfBoundsException) {
			if (id < 0 || static_cast<unsigned int>(id) >= _size)
				throw(ArrayOutOfBoundsException());
			return _array[id];
		}

	private:

		T * _array;
		unsigned int _size;

};

#endif
