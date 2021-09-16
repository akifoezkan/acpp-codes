#include <iostream>
#include <initializer_list>

int main()
{
	auto x = { 10 }; //std::initializer_list<int>
	auto y{ 10 }; //int
	auto z{ 10, 20}; //invalid
}
