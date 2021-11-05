#include <iostream>


template<int n>
void func(int(*)[n % 2 == 0] = nullptr)
{
	std::cout << "for even numbers\n";
}

template<int n>
void func(int(*)[n % 2 != 0] = nullptr)
{
	std::cout << "for odd numbers\n";
}

int main()
{
	func<4>();
	func<7>();
}
