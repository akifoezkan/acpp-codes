#include <type_traits>
#include <iostream>

int main()
{
	auto f1 = [](int x) {return x * 5 + 3; };
	auto f2 = [](int x) {return x * 5 + 3; };

	std::cout << std::boolalpha << (typeid(f1) == typeid(f2)) << "\n";
	f1 = f2; //error in C++20
}
