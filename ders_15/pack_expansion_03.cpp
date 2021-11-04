#include <tuple>
#include <iostream>



template <typename ...Args>
void func(Args ...args)
{
	std::tuple<Args...>tx(args...);
	//hem template parametre paketi hem fonksiyon paramere
	std::cout << std::get<0>(tx);
}


int main()
{
	func(12, 3.4, "alican");
}


/*

//derleyicinin yazdığı fonksiyonun şöyle olduğunu düşünebiliriz:
void func(int p1, double p2, const char* p3)
{
	std::tuple<int, double, const char*> tx(p1, p2, p3);
}


*/
