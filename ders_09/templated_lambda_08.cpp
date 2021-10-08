#include <utility>

template <typename ...Types>
void foo(Types ...);

int main()
{
	auto fx = [](auto ...args) { foo(std::forward<decltype(args)>(args)...); };
	auto fy = []<class ...Args>(Args...args) { foo(std::forward<Args>(args)...); };
}
