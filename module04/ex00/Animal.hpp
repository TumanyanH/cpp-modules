#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);
		// Destructor
		~Animal();
		
		// Operators
		Animal & operator=(const Animal &assign);
		
		std::string getType() const;
		void setType(std::string type);
		virtual void makeSound() const;
	protected:
		std::string _type;
};

#endif