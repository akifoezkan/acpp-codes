#include <type_traits>
#include <iostream>

class Myclass{};

void f(Myclass&)
{
	std::cout << "Myclass&\n";
}

void f(const Myclass&)
{
	std::cout << "const Myclass&\n";
}


void f(Myclass&&)
{
	std::cout << "Myclass&&\n";
}

void f(const Myclass&&)
{
	std::cout << "const Myclass&&\n";
}


template <typename T>
void call_f(T&& t)
{
	if constexpr(std::is_lvalue_reference_v<T>)
		f(t);
	else
		f(std::move(t));
}

int main()
{
	Myclass x;
	f(x); call_f(x);
	const Myclass cx{};
	f(cx); call_f(cx);
	f(Myclass{}); call_f(Myclass{});
	f(std::move(x)); call_f(std::move(x));
	f(std::move(cx)); call_f(std::move(cx));
}
