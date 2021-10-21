#include <string_view>
#include <iostream>

int main()
{
	char str[] = { 'a', 'l', 'p', 'e', 'r' };
	std::string_view sv{ str, 5 };

	std::cout << sv << "\n"; //no problem
	std::cout << sv.data() << "\n"; //ub
}
