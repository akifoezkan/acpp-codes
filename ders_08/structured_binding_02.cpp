#include <iostream>
#include <type_traits>

struct Nec {
	int x{};
	int a[10]{}
};

Nec foo();

int main()
{
	auto [x, a] = foo();

	constexpr bool bx = std::is_array_v<decltype(a)>;  //true
	constexpr bool by = std::is_pointer_v<decltype(a)>; //false

}
