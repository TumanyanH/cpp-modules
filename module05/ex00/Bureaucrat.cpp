#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat(std::string name)
{
	std::cout << "Default Constructor called of Bureaucrat" << std::endl;
	this->_name = name;
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of Bureaucrat" << std::endl;
}


// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called of Bureaucrat" << std::endl;
}

// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	(void) assign;
	return *this;
}

void Bureaucrat::gradeUp()
{
	try {
		if (this->_grade >= 1 && this->_grade <= 150)
			this->_grade--;
		else
			throw Bureaucrat::GradeTooHighException();
	} catch (const char * e) {
		std::cout << e << std::endl;
	}
}

void Bureaucrat::gradeDown()
{
	try {
		if (this->_grade < 150) 
			this->_grade++;
		else
			throw Bureaucrat::GradeTooLowException();
	} catch (const char * e) {
		std::cout << e << std::endl;
	}
}

int	Bureaucrat::getGrade() const
{ return (this->_grade); }

std::string	Bureaucrat::getName() const
{ return (this->_name); }

const char * Bureaucrat::GradeTooHighException::what() const throw ()
{
	return ("Grade can't be higher than 1");
}

const char * Bureaucrat::GradeTooLowException::what() const throw ()
{
	return ("Grade can't be lower than 150");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
	return out;
}
