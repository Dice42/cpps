#include <iostream>
#include <limits>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm> 
int main()
{
	std::vector<int>v = {-45, 2, 31, 4, 5, 6, 700, 8, 9};

	v.push_back(42);
	v.pop_back();

	std::vector<int>::iterator	itr,low,up;


	//i can derefrence the operator and display the element
	for(itr = v.begin(); itr != v.end(); itr++)
		std::cout << *itr << ", ";
	// for(int x:v)
		// std::cout << x << std::endl;

		// min_element

	std::cout << "\nmin------------max" << std::endl;
	int min = *std::min_element(v.begin(), v.end());
    int max = *std::max_element(v.begin(), v.end());

	std::cout << min << std::endl;
	std::cout << max << std::endl;

}

// int main()
// {
// 	std::forward_list<int>v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

// 	v.push_front(42);
// 	v.pop_front();

// 	std::forward_list<int>::iterator	itr;


// 	//i can derefrence the operator and display the element
// 	for(itr = v.begin(); itr != v.end(); itr++)
// 		std::cout << *itr << ", ";
// 	// for(int x:v)
// 	// std::cout << std::endl;
// }

