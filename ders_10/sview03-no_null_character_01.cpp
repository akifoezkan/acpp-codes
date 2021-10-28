#include <string_view>
#include <iostream>

int main()
{
	char str[] = { 'a', 'l', 'p', 'e', 'r' };
	std::string_view sv = str;

	std::cout << sv << "\n";        // ub, nonterminating print
	std::cout << sv.data() << "\n"; // ub
}
