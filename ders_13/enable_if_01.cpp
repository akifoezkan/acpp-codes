// enable_if_t<true, T>  is T
// enable_if_t<false, T>  is not defined, thus syntax error
// SFINAE: Substitution failure is not an error
// -> when enable_if does not define a type this function is taken from the overload set, but the whole code still compiles.

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
