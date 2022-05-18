#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form();
		Form(const Form &copy);
		Form(std::string name, const int signGrade, const int executeGrade, std::string target);

		// Destructor
		virtual ~Form();
		
		// Operators
		Form & operator=(const Form &assign);

		std::string getName() const;
		std::string getTarget() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecuteGrade() const;

		void beSigned(Bureaucrat &bureacrat);
		virtual void execute(Bureaucrat const & executor) const;

		class GradeTooHighException : public std::exception {
			const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char * what() const throw();
		};
		
	private:
		const std::string _name;
		const std::string _target;
		bool _isSigned;
		const int _signGrade;
		const int _executeGrade;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif