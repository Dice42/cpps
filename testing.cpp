#include <iostream>
#include <iomanip>   //input output manipulator


// int main (int ac, char **av)
int main (void)
{
	std::cout << std::setiosflags (std::ios::showbase);
	std::cout.setf << std::hex << 42 << std::endl;
	return (0);
}