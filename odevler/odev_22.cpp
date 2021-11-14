// C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?

#include <iostream>
#include <utility>

int func(int &)
{
	return 1;
}

int func(int &&)
{
	return 2;
}

template <typename T>
int f1(T &&x)
{
	return func(x);
}

template <typename T>
int f2(T &&x)
{
	return func(std::move(x));
}

template <typename T>
int f3(T &&x)
{
	return func(std::forward<T>(x));
}


int main()
{
	int ival = 10;

	std::cout << f1(ival) << f1(20);    // 1, 1 => func(x) where x is a name
	std::cout << f2(ival) << f2(20);    // 2, 2 => func(move(x)), x is X-val
	std::cout << f3(ival) << f3(20);    // 1, 2

	return 0;
}
