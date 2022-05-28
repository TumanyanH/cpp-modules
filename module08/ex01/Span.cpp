#include <exception>
#include "Span.hpp"

Span::Span() { }

Span::Span(unsigned int size)
{
	this->_size = size;
	this->_currentSize = 0;
}

Span::Span(const Span &copy)
{
	this->_currentSize = copy._currentSize;
	this->_size = copy._size;
	this->_stack = copy._stack;
}

Span::~Span() { }

Span & Span::operator=(const Span &assign)
{
	return (Span &)assign;
}

void Span::addNumber(int newOne)
{
	if (this->_size - this->_currentSize == 0)
		throw (std::out_of_range("Out of range"));
	this->_stack.push_back(newOne);
	this->_currentSize++;
}

static std::vector<int> cpySort(std::vector<int> orig)
{
	std::sort(orig.begin(), orig.end());
	return (orig);
}

int Span::longestSpan()
{
	std::vector<int> sorted;
	int span;

	sorted = cpySort(this->_stack);
	span = std::abs(sorted[0] - sorted[this->_currentSize - 1]);
	return (span);
}

int Span::shortestSpan()
{
	std::vector<int> sorted;
	int span = 0;

	sorted = cpySort(this->_stack);
	if (this->_currentSize > 1)
	{
		span = std::abs(sorted[0] - sorted[1]);
		for (int i = 1; i < this->_currentSize; i++)
		{
			if (span > (std::abs(sorted[i - 1] - sorted[i])))
				span = std::abs(sorted[i - 1] - sorted[i]);
		}
	}
	return (span);
}

void Span::fillRange(int start, int end)
{
	for (; start <= end; start++)
		this->addNumber(start);
}
