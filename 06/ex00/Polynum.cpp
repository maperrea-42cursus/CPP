#include "Polynum.hpp"

Polynum::Polynum(std::string const & value = "0") {
	set_string(value);
}

Polynum::Polynum(const Polynum & copy) {
	*this = copy;
}

Polynum::~Polynum() {
}

void Polynum::set_string(std::string const & value) {
	_string = value;

	try {
		_char = to_char(value);
		is_char = true;
	} catch (std::exception & e) {
		is_char = false;
	}

	try {
		_int = to_int(value);
		is_int = true;
	} catch (std::exception & e) {
		is_int = false;
	}

	try {
		_float = to_float(value);
		is_float = true;
	} catch (std::exception & e) {
		is_float = false;
	}

	try {
		_double = to_double(value);
		is_double = true;
	} catch (std::exception & e) {
		is_double = false;
	}
}

char	Polynum::to_char(std::string const & value)  throw(ImpossibleConversionException) {
	if (value.find_first_not_of("0123456789f.") != std::string::npos)
		throw (ImpossibleConversionException());
	
}

int		Polynum::to_int(std::string const & value) throw(ImpossibleConversionException) {
}

float 	Polynum::to_float(std::string const & value) throw(ImpossibleConversionException) {
}

double	Polynum::to_double(std::string const & value) throw(ImpossibleConversionException) {
}

Polynum & Polynum::operator=(const Polynum & rhs) {
	if (this == &rhs)
		return *this;
	set_string(static_cast<std::string>(rhs));
}

Polynum::operator std::string() {
	return _string;
}

Polynum::operator char() throw(ImpossibleConversionException, NonDisplayableException) {
	if (is_char) {
		if (_char < 32 || _char > 126)
			throw (NonDisplayableException());
		else
			return _char;
	} else {
		throw (ImpossibleConversionException());
	}
}

Polynum::operator int() throw(ImpossibleConversionException) {
	if (is_int)
		return _int;
	else
		throw (ImpossibleConversionException());
}

Polynum::operator float() throw(ImpossibleConversionException) {
	if (is_float)
		return _float;
	else
		throw (ImpossibleConversionException());
}

Polynum::operator double() throw(ImpossibleConversionException) {
	if (is_double)
		return _double;
	else
		throw (ImpossibleConversionException());
}
