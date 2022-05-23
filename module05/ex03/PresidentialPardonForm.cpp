#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm() 
{
	std::cout << "Default Constructor called of PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 25, 5, target)
{
	std::cout << "Parameterized Constructor called of PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy.getName(), 25, 5, copy.getTarget())
{
	(void) copy;
	std::cout << "Copy Constructor called of PresidentialPardonForm" << std::endl;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor called of PresidentialPardonForm" << std::endl;
}

// Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	(void) assign;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
	{
		std::cout << "Form is not even signed!" << std::endl;
		return ;
	}
	if (executor.getGrade() > this->getExecuteGrade())
		throw PresidentialPardonForm::GradeTooLowException();
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
