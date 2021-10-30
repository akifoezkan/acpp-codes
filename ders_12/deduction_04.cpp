#include <iostream>

class Nec {
public:
	int foo(double) { return 1; }
};

template <typename C, typename T, typename U>
void func(T(C::*)(U))
{
	std::cout << typeid(C).name() << '\n';
	std::cout << typeid(T).name() << '\n';
	std::cout << typeid(U).name() << '\n';
}

int main()
{
	func(&Nec::foo);
}
