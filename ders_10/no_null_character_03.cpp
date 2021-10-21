#include <string_view>
#include <array>
#include <iostream>

int main()
{
	std::array a = { 'a', 'l', 'p', 'e', 'r' };
	std::string_view sv{ a.data(), a.size() };

	std::cout << sv << "\n"; //no problem
	std::cout << a.data() << "\n"; //ub
}
