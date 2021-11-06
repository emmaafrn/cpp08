#include "Span.hpp"

Span::Span(unsigned int N) : _limit(0), _N(N){
	_tab.reserve(_N);
}

Span::Span(const Span & copy) : _limit(copy._limit), _N(copy._N){
	_tab.reserve(_N);
	for(int i = 0; i < _limit; i++){
		_tab[i] = copy._tab[i];
	}
}

Span::~Span(){
	_tab.clear();
}

void	Span::addNumber(int number){
	if (_limit < _N){
		_tab.push_back(number);
		_limit++;
	}
	else
		throw std::exception();
}

std::vector<int>*	numbers_sort(std::vector<int> *tab, int limit){
	int	i = 0;
	int	j;
	int	tmp = 0;

	while (i < limit){
		j = i + 1;
		while (j < limit){
			if ((*tab)[j] < (*tab)[i]){
				tmp = (*tab)[j];
				(*tab)[j] = (*tab)[i];
				(*tab)[i] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	Span::shortestSpan(){
	int	i = 0;
	int	res = 0;

	if (_limit < 2)
		throw std::exception();
	else {
		numbers_sort(&_tab, _limit);
		res = abs(_tab[i + 1] - _tab[i]);
		for (int i = 0; i < _limit - 1; i++){
			if (abs(_tab[i + 1] - _tab[i]) < res){
				res = abs(_tab[i + 1] - _tab[i]);
			}
		}
	}
	return (res);
}

int	Span::longestSpan(){
	int	res = 0;

	if (_limit < 2)
		throw std::exception();
	else {
		numbers_sort(&_tab, _limit);
		res = abs(_tab[_limit - 1] - _tab.front());
	}
	return (res);
}

void	Span::addRandom(unsigned int nbr){
	srand(time(0));
	int				mystery = 0;
	unsigned int	i = 0;

	if (nbr < 1)
		throw std::exception();
	while (i < nbr){
		mystery = rand() % 100 + 1;
		this->addNumber(mystery);
		i++;
	}
}
