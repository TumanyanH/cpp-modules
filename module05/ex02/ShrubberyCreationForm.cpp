#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	std::cout << "Default Constructor called of ShrubberyCreationForm" << std::endl;
	Form("ShrubberyCreationForm", 145, 137, target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of ShrubberyCreationForm" << std::endl;
	Form(copy.getName(), 145, 137, copy.getTarget());
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor called of ShrubberyCreationForm" << std::endl;
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	(void) assign;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream out;
	if (!this->getIsSigned())
	{
		std::cout << "Form is not even signed!" << std::endl;
		return ;
	}
	if (executor.getGrade() > this->getExecuteGrade())
		throw ShrubberyCreationForm::GradeTooLowException();
	out.open(this->getTarget() + "_shrubbery", std::fstream::out | std::fstream::trunc);
	if (out.is_open())
	{
		out << "                 # #### ####			" << std::endl;
        out << "               ### \\/#|### |/####		" << std::endl;
        out << "              ##\\/#/ \\||/##/_/##/_#	" << std::endl;
        out << "            ###  \\/###|/ \\/ # ###	    " << std::endl;
        out << "          ##_\\_#\\_\\## | #/###_/_#### " << std::endl;
        out << "         ## #### # \\ #| /  #### ##/##	" << std::endl;
        out << "          __#_--###`  |{,###---###-~	" << std::endl;
        out << "                    \\ }{				" << std::endl;
        out << "                     }}{				" << std::endl;
        out << "                     }}{				" << std::endl;
        out << "                     {{}				" << std::endl;
        out << "               , -=-~{ .-^- _			" << std::endl;
        out << "                     `}				    " << std::endl;
        out << "                      {				    " << std::endl;

		out.close();
	}
}


