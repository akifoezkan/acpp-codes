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

int main()
{
	int x{};

	func(10);  //only #1 is viable
	func(&x);  //both viable the more specific one (#2) is chosen.
}
