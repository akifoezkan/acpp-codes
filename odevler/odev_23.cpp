#include <iostream>

template <class T>
void func(T& x)
{
	std::cout << "1";
}

template <>
void func(const int& x)
{
	std::cout << 2;
}

int main()
{
	int ival = 0;
	func(ival);
}
