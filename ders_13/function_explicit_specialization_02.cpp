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

int main()
{
	int *p = nullptr;

	func(p);    // 3
}

// overload resolution a 1 ve 3 katilir, 3 secilir.
// Note that
//  - 2 does not participate to overload resolution set
//  - 2 is explicit specialization of 1
