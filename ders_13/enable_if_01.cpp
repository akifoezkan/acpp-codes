#include <type_traits>

template <typename T>
std::enable_if_t<std::is_integral_v<T>, T> foo(T x);

int main()
{
	foo('a');
	foo(12);
	foo(24L);
	foo(1.2); //gecersiz
}
