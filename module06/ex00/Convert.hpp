#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>

class Convert
{
	public:
		// Constructors
		Convert();
		Convert(const Convert &copy);
		Convert(std::string val);
		
		// Destructor
		~Convert();
		
		// Operators
		Convert & operator=(const Convert &assign);
		
		void tryChar();
		void tryInt();
		void tryFloat();
		void tryDouble();
		
	private:
		std::string _val;
};

#endif