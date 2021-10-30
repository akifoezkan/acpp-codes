#include <iostream>

int foo(double) { return 1; }

template <typename T, typename U>
void func(T(*)(U))
{
	std::cout << typeid(T).name() << '\n';
	std::cout << typeid(U).name() << '\n';
}

int main()
{
	func(foo);
}
