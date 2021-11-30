#ifndef POLYNUM_HPP
# define POLYNUM_HPP

#include <stdexcept>

class Polynum {
	public:

		class ImpossibleConversionException : public std::exception {
			virtual char const * what () const throw();
		}

		class NonDisplayableException : public std::exception {
			virtual char const * what () const throw();
		}

		/* Constructors and destructors */

		Polynum(std::string const & value = "0");
		Polynum(const Polynum & copy);
		~Polynum();

		/* Member functions */


		/* Setters end Getters */

		void set_string(std::string const & value);

		/* Operator overloads */

		Polynum & operator=(const Polynum & rhs);

		operator std::string();
		explicit operator char() throw(ImpossibleConversionException, NonDisplayableException);
		explicit operator int() throw(ImpossibleConversionException);
		explicit operator float() throw(ImpossibleConversionException);
		explicit operator double() throw(ImpossibleConversionException);

	private:

		char	to_char(std::string const & value) throw(ImpossibleConversionException);
		int		to_int(std::string const & value) throw(ImpossibleConversionException);
		float	to_float(std::string const & value) throw(ImpossibleConversionException);
		double	to_double(std::string const & value) throw(ImpossibleConversionException);

		/* Member variables */

		std::string	_string;

		bool		is_char;
		char		_char;

		bool		is_int;
		int			_int;

		float		is_float;
		float		_float;

		double		is_double;
		double		_double;

};

#endif
