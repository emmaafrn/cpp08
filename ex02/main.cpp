#include "mutantstack.hpp"

int main(){

	std::cout << "------ SUBJECT TEST ------" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(1597);
	mstack.pop();
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

	std::cout << "------ EMPTY TEST ------" << std::endl;

	MutantStack<int> estack;

	if (estack.empty())
		std::cout << "stack is empty" << std::endl;
	
	std::cout << "------ PUSH TEST ------" << std::endl;

	for (int i = 0; i < 5; i++){
		estack.push(i);
	}
	it = estack.begin();
	ite = estack.end();
	while (it != ite){
		std::cout << *it << std::endl;
		++it;
	}
	return (0);
}
