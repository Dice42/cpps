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
	// std::string str[4];
	// std::string s;
	// s = "hello world";
	// s.resize(9);
	// str[0] =  "Index"; str[1] = "First_Name"; str[2] = "Last_Name"; str[3] = "Nick_Name"; 
	// for (int i = 0 ; i < 4 ; i++)
	// 	std::cout << std::setw(10) << s + '.' <<"|";
	// std::cout << std::endl;
	// return (0);
	// time_t timestamp = time(NULL);
	// struct tm datetime = *localtime(&timestamp);

	// std::cout << asctime(&datetime);
	// time_t timestamp = time(&timestamp);
	// struct tm datetime = *localtime(&timestamp);

	// std::cout << datetime.tm_hour;

	// std::cout << asctime(&datetime);
	// Get the timestamp for the current date and time
	time_t timestamp;
	time(&timestamp);

	std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
	// Display the date and time represented by the timestamp
	std::cout << ctime(&timestamp);

}