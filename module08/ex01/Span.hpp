#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <cstdlib>

class Span
{
	public:
		Span(unsigned int size);
		Span(const Span &copy);
		~Span();
		Span & operator=(const Span &assign);
		
		void addNumber(int newOne);
		int shortestSpan();
		int longestSpan();
		void fillRange(int start, int end);

	private:
		Span();
		int _size;
		int _currentSize;
		std::vector<int> _stack;
};

#endif