#include <iostream>

// 1
template<typename T, unsigned N>
std::size_t len(T(&)[N])
{
	return N;
}

// 2
template<typename T>
typename T::size_type len(T const& t)
{
	return t.size();
}

int main()
{
	int a[10]{};
	std::cout << len(a);
	std::cout << len("tmp");

	int* p{};
	std::cout << len(p); // `gecersiz, substitution error

	std::allocator<int> x;
	std::cout << len(x);    // gecersiz, instantiation error

    // allocator<int>::size_type => exist
    // allocator<int>.size()     => does NOT exist
    // func-2 is selected (Substitution is successful)
    // but gave a syntax error during instantiation
}
