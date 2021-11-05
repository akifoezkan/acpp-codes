#include <iostream>

int main()
{
	int a[4]{};

	std::cout << a << "\n";
	std::cout << a + 1 << "\n";
	std::cout << a + 2 << "\n";
	std::cout << a + 3 << "\n";
	
	std::cout << "\n\n";

	std::cout << &a << "\n";
	std::cout << &a + 1 << "\n";
	std::cout << &a + 2 << "\n";
	std::cout << &a + 3 << "\n";
}
