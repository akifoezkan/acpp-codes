#include <iostream>
#include <tuple>

std::tuple<int, double, std::string, char> foo();

int main()
{
	auto [ival, dval, str, _] = foo();
	auto [i, d, s, _] = foo(); //error
}
