#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		
		// Destructor
		~Bureaucrat();

		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);

		class GradeTooHighException : public std::exception {
			const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char * what() const throw();
		};

		int getGrade() const;
		void gradeUp();
		void gradeDown ();
		std::string getName() const;
	private:
		Bureaucrat();
		std::string _name;
		int _grade;
};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur);

#endif