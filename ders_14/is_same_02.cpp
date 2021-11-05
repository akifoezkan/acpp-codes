#include <type_traits>
#include <iostream>

int main()
{
	constexpr bool bx = std::is_same<int, double>::value; //false
	constexpr bool by = std::is_same<int, int>::value; //true
	constexpr bool bz = std::is_same<int, const int>::value; //false
}
