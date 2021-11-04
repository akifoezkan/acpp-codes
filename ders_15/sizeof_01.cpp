#include <iostream>
#include <string>

template <typename T, typename ...Args>
void foo(T, Args ...args)
{
	//...
	std::cout << sizeof...(Args) << '\n';
	std::cout << sizeof...(args) << '\n';
}

int main()
{
	std::string s{ "mahmut" };
	foo(1, 5, 2.12, "alican", s);
}
