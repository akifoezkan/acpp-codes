#include <iostream>

template<typename T>
void func(T)
{
	std::cout << "1";
}

template<typename T>
void func(T*)
{
	std::cout << "2";
}

template<>
void func(int*)
{
	std::cout << "3";
}


int main()
{
	int* p = nullptr;

	func(p);    // 3
}


// 1) overload resolution a 1 ve 2 katilir, 2 secilir.
// 2) 2 nin specialization i olan 3 secilir.
// Note that
//  - 2 does not participate to overload resolution set
//  - 3 is explicit specialization of 2 since is a more specialized version than 1
