#include <iostream>

template <typename T, typename U>
void func(T, U)
{
	std::cout << "type T is : " << typeid(T).name() << '\n';
	std::cout << "type U is : " << typeid(U).name() << '\n';
}


int main()
{
	//func(12, 4.5);
	//func<double, double>(12, 4.5);
	func<int>(12, 4.5);
}
