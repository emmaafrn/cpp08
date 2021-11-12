#ifndef EASYFIND_HPP
# define EASYFIND_HPP


#include <iostream>
#include <vector>


template <typename T>
void	easyfind(T container, int x){
	typename T::iterator it;
	for(it = container.begin(); *it != x && it != container.end(); it++){		
	}
	if (it == container.end()){
		throw std::exception();
	}
	else
		std::cout << x << " has been found in the array !" << std::endl;
}



#endif