#include <iostream>

//#1
template <typename T>
void func(T x)
{
	std::cout << "func(T x)\n";
}

//#2
template <typename T>
void func(T *x)
{
	std::cout << "func(T* x)\n";
}

//#3
template <typename T>
void func(T** x)
{
	std::cout << "func(T** x)\n";
}

int main()
{
	int x{};
	int* ptr{ &x };

	func(10);   // 1
	func(&x);   // 2
	func(ptr);  // 2
	func(&ptr); // 3
}
