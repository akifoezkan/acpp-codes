#include <iostream>
#include <initializer_list>

template <typename T>
void func(T x);

int main()
{
	auto list = { 1, 2, 3, 4, 5 }; //std::initializer_list<int>
	func({ 1, 2, 3, 4, 5 }); //invalid code (no deduction);
}
