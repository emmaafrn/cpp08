#include "easyfind.hpp"

int	main(){
	try{
		std::vector<int> tab(4, 1);

		tab.push_back(5);
		easyfind(tab, 6);
	}
	catch (std::exception & e){
		std::cout << "The element is not in the array !" << std::endl;
	}
}