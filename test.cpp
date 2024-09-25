#include <iostream>
#include <limits>
#include <vector>
#include <list>
#include <forward_list>
int main()
{
	std::vector<int>v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	v.push_back(42);
	v.pop_back();

	std::vector<int>::iterator	itr;


	//i can derefrence the operator and display the element
	for(itr = v.begin(); itr != v.end(); itr++)
		std::cout << *itr << ", ";
	// for(int x:v)
	// std::cout << std::endl;

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