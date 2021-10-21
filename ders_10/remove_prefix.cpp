#include <string_view>
#include <iostream>

int main()
{
	std::string_view sv{ "melih cicek" };
	sv.remove_prefix(6);

	std::cout << "|" << sv << "|\n";
	std::cout << "|" << sv.data() << "|\n";
}
