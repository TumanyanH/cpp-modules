#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "Default Constructor called of RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
{
	std::cout << "Parameterized constructor called of RobotomyRequestForm" << std::endl;
	Form("RobotomyRequestForm", 72, 45, target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of RobotomyRequestForm" << std::endl;
	Form(copy.getName(), 145, 137, copy.getTarget());
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor called of RobotomyRequestForm" << std::endl;
}

// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	(void) assign;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
	{
		std::cout << "Form is not even signed!" << std::endl;
		return ;
	}
	if (executor.getGrade() > this->getExecuteGrade())
		throw RobotomyRequestForm::GradeTooLowException();
	std::cout << " * DRRRRR DRRRRR VJJJJJJXX KNOCK KNOCK * " << std::endl;
	std::cout << this->getTarget() << " has been robotomized successfully 50\% of the time";
}