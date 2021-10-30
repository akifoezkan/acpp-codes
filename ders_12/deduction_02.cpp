#include <iostream>

template <typename T, int N>
void func(const T(&)[N])
{
	std::cout << typeid(T).name() << ' ' << N << '\n';
}

int main()
{
	int a[10]{};

	func(a);
	func("mert");
}
