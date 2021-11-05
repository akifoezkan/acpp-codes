#include <type_traits>

template <typename T>
void func(T)
{
	static_assert(std::is_pointer_v<T>, "template argument is not a pointer type");
}

int main()
{
	int* p{nullptr };
	func(p);
	func(2.3);
}
