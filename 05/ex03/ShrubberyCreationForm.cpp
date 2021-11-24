#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("Shrubbery Creation Form", 145, 137, "default target") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
	: Form("Shrubbery Creation Form", 145, 137, target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) 
	: Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade(), copy.getTarget()) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(Bureaucrat const & b) const
	throw (GradeTooLowException, FormNotSignedException) {
	try {
		Form::execute(b);
	} catch (GradeTooLowException & e) {
		throw e;
	} catch (FormNotSignedException & e) {
		throw e;
	}
	std::ofstream os(getTarget() + "_shrubbery");

	os << "	        . . .									" << std::endl;
	os << "	      .        .  .     ..    .					" << std::endl;
	os << "	   .                 .         .  .				" << std::endl;
	os << "	                   .							" << std::endl;
	os << "	                  .                ..			" << std::endl;
	os << "	  .          .            .              .		" << std::endl;
	os << "	  .            '.,        .               .		" << std::endl;
	os << "	  .              'b      *						" << std::endl;
	os << "	   .              '$    #.                ..	" << std::endl;
	os << "	  .    .           $:   #:               .		" << std::endl;
	os << "	..      .  ..      *#  @):        .   . .		" << std::endl;
	os << "	             .     :@,@):   ,.**:'   .			" << std::endl;
	os << "	 .      .,         :@@*: ..**'      .   .		" << std::endl;
	os << "	          '#o.    .:(@'.@*''  .					" << std::endl;
	os << "	  .  .       'bq,..:,@@*'   ,*      .  .		" << std::endl;
	os << "	             ,p$q8,:@)'  .p*'      .			" << std::endl;
	os << "	      .     '  . '@@Pp@@*'    .  .				" << std::endl;
	os << "	       .  . ..    Y7'.'     .  .				" << std::endl;
	os << "	                 :@):.							" << std::endl;
	os << "	                .:@:'.							" << std::endl;
	os << "	              .::(@:.      -Sam Blumenstein-	" << std::endl;

	os.close();
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs) {
	Form::operator=(rhs);
	return *this;
}
