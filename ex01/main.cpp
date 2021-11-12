#include "Span.hpp"

int main(){
	try{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		Span an = Span(10000);

		an.addRandom(10000);

		std::cout << an.shortestSpan() << std::endl;
		std::cout << an.longestSpan() << std::endl;
		
		an.addNumber(42);
	}
	catch (std::exception & e){
		std::cout << "Oh no, error" << std::endl;
	}
}