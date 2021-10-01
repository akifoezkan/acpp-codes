#include <type_traits>
#include <iostream>

int main()
{
	auto f1 = [](int x) {return x * 5 + 3; };
	auto f2 = [](int x) {return x * 5 + 3; };

	constexpr auto b = std::is_same_v<decltype(f1), decltype(f2)>;

	std::cout << std::boolalpha << b << "\n";
}
