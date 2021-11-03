#ifndef EASYFIND_HPP
# define EASYFIND_HPP


#include <iostream>
#include <vector>


template <typename T>
void	easyfind(T contener, int x){
	std::vector<int>::iterator it;
	for(it = contener.begin(); *it != x && it != contener.end(); it++){		
	}
	if (it == contener.end()){
		throw std::exception();
	}
	else
		std::cout << x << " hab been found in the array !" << std::endl;
}



#endif