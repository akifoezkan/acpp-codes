#include <iostream>

int main()
{
	int x{ 10 };

	std::cout << "x = " << x << "\n";
	auto f = [x]()mutable {++x; }; //geçerli. non const member function
	std::cout << "x = " << x << "\n";
	f();
	std::cout << "x = " << x << "\n";
}
