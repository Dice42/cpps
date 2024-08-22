#include <iostream>
#include <string>
#include <iomanip>   //input output manipulator


// int main (int ac, char **av)
int main (void)
{
	// std::ios_base::fmtflags ff;
	// ff = std::cout.flags();
	// ff &= ~std::cout.basefield;   // unset basefield bits
	// ff |= std::cout.hex;          // set hex
	// ff |= std::cout.showbase;     // set showbase
 	// std::cout.flags(ff);
	// std::cout << std::setiosflags (std::ios::showbase);
	// std::cout << std::setiosflags (std::ios::showbase) << std::hex << 42 << std::endl;

	// for (int i = 0 ; i < 4 ; i++)
	// {
	// 	std::cout << std::setw(10) << "|" << "hello world is there ";
	// }
	std::string str[4];
	std::string s;
	s = "hello world";
	s.resize(9);
	str[0] =  "Index"; str[1] = "First_Name"; str[2] = "Last_Name"; str[3] = "Nick_Name"; 
	for (int i = 0 ; i < 4 ; i++)
		std::cout << std::setw(10) << s + '.' <<"|";
	std::cout << std::endl;
	return (0);
}