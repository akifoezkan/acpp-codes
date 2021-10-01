#include <string>
#include <sstream>
#include <iostream>

int main()
{
	std::string str{ "necati ergin" };
	std::string name, surname;

	std::istringstream{ str } >> name >> surname;

	std::cout << "name = " << name << "\n";
	std::cout << "surname = " << surname << "\n";
}
