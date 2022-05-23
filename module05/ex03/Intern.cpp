#include "Intern.hpp"

enum s_form {
	PresidentialPardon,
	RobotomyRequest,
	ShrubberyCreation,
	def
};

// Constructors
Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}

// Destructor
Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}

// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

s_form find_form(const std::string target)
{
	if (std::string (target) == "PresidentialPardonForm")
        return (PresidentialPardon);
    else if (std::string (target) == "RobotomyRequestForm")
        return (RobotomyRequest);
    else if (std::string (target) == "ShrubberyCreationForm")
        return (ShrubberyCreation);
    else
        return (def);
}

Form * Intern::makeForm(const std::string name, const std::string target)
{
	Form * form = NULL;
	s_form found = find_form(name);

	std::cout << "Intern creates " << target << std::endl;

	switch (found)
	{
		case PresidentialPardon:
			form = new PresidentialPardonForm(target);
			break;
		case RobotomyRequest:
			form = new RobotomyRequestForm(target);
			break;
		case ShrubberyCreation:
			form = new ShrubberyCreationForm(target);
			break;
		default :
			break;
	}
	return form;
}