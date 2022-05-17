#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat(std::string name, int grade)
{
	std::cout << "Default Constructor called of Bureaucrat" << std::endl;
	this->_name = name;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
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
	if (this->_grade >= 1 && this->_grade <= 150)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::gradeDown()
{
	if (this->_grade < 150) 
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
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
