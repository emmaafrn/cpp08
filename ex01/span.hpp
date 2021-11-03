#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class span{
public:
	span(unsigned int size);
	~span();
	void	addNumber(int number);
	int		shortestSpan();
	int		longestSpan();
};










#endif