#include <utility>

template<typename T>
void callFoo(T&& val) 
{
	foo(std::forward<T>(val));
}

// C++20
void callFoo(auto&& val) 
{
	foo(std::forward<decltype(val)>(val));
}

