#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form();
		Form(const Form &copy);
		Form(std::string name, const int signGrade, const int executeGrade);
		
		// Destructor
		~Form();
		
		// Operators
		Form & operator=(const Form &assign);

		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecuteGrade() const;

		void beSigned(Bureaucrat &bureacrat);

		class GradeTooHighException : public std::exception {
			const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char * what() const throw();
		};
		
	private:
		const std::string _name;
		bool _isSigned;
		const int _signGrade;
		const int _executeGrade;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif