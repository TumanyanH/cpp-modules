#include "Form.hpp"

// Constructors
Form::Form()
: _name("default"), _target("Default target"), _isSigned(false), _signGrade(150), _executeGrade(150)
{
	std::cout << "Default Constructor called of Form" << std::endl;
}

Form::Form(const Form &copy)
: _name(copy.getName()), _target(copy.getTarget()), _isSigned(false), _signGrade(copy.getSignGrade()), _executeGrade(copy.getExecuteGrade())
{
	std::cout << "Copy Constructor called of Form" << std::endl;
	(void) copy;
}

Form::Form(std::string name, const int signGrade, const int executeGrade, std::string target)
: _name(name), _target(target), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooHighException();
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooLowException();
	std::cout << "Parameterized Constructor called of Form" << std::endl;
}

// Destructor
Form::~Form()
{
	std::cout << "Destructor called of Form" << std::endl;
}

// Operators
Form & Form::operator=(const Form &assign)
{
	(void) assign;
	return *this;
}

std::string Form::getName() const
{ return (this->_name); }

std::string Form::getTarget() const
{ return (this->_target); }

bool Form::getIsSigned() const
{ return (this->_isSigned); }

int Form::getExecuteGrade() const
{ return (this->_executeGrade); }

int Form::getSignGrade() const
{ return (this->_signGrade); }

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too low!");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

void Form::beSigned(Bureaucrat &bureacrat)
{
	if (bureacrat.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << form.getName() << " form with execute grade of " << form.getExecuteGrade() << ", sign grade of " << form.getSignGrade() << " and form";
	if (form.getIsSigned())
		out << " is signed!";
	else 
		out << " is unsigned!";
	out << std::endl;
	return out;
}
