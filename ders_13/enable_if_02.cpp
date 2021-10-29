#include <type_traits>
#include <iostream>
#include <string>


template <typename T>
std::enable_if_t<std::is_integral_v<T>, T> foo(T x)
{
	std::cout << "for integer types\n";
	//...
	return x;
}

template <typename T>
std::enable_if_t<std::is_floating_point_v<T>, T> foo(T x)
{
	std::cout << "for floating types\n";
	return x;
}

template <typename T>
std::enable_if_t<std::is_pointer_v<T>, T> foo(T x)
{
	std::cout << "for pointer types\n";
	return x;
}

int main()
{
	int* p{};
	auto a = foo('a');
	auto b = foo(12);
	auto c = foo(5.6);
	auto d = foo(p);
	foo(std::string{ "neco" }); //gecersiz
}
