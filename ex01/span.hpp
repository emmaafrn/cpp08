#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span{
private :
	std::vector<int> _tab;
	int	_limit;
	int	_N;
public:
	Span(unsigned int N);
	Span(const Span & copy);
	~Span();
	void	addNumber(int number);
	int		shortestSpan();
	int		longestSpan();
	void	addRandom(unsigned int nbr);
};










#endif