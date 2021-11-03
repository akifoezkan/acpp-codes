#include <iostream>
#include <vector>

template<typename T, unsigned N>
std::size_t len(T(&)[N])
{
    std::cout << "\n(1) ";
	return N;
}

template<typename T>
typename T::size_type len(T const& t)
{
    std::cout << "\n(2) ";
	return t.size();
}

std::size_t len(...)
{
    std::cout << "\n(3) ";
	return 0;
}


int main()
{
	int a[10];
	std::cout << len(a);        // 1
	std::cout << len("tmp");    // 1

	std::vector<int> v;
	std::cout << len(v);        // 2 is selected

	int* p{};
	std::cout << len(p);        // 3

#ifndef HIDE_ERROR
	std::allocator<int> x;
	std::cout << len(x);        // error, 2 is selected
                                // but instantiation error
#endif
}
