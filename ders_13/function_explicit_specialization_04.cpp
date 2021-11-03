#include <iostream>

template<typename T>
void func(T)
{
	std::cout << "1";
}

template<>
void func(int *)
{
	std::cout << "2";
}

template<typename T>
void func(T *)
{
	std::cout << "3";
}

template<>
void func(int *)
{
	std::cout << "4";
}


int main()
{
	int *p = nullptr;

	func(p);    // 4
}


// 1) overload resolution a 1 ve 3 katilir, 3 secilir.
