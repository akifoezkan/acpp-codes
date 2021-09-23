template <typename ...Args>
void foo(Args&& ...)
{
	//...
}

int main()
{
	auto f = [](auto&&... args) {
		foo(std::forward<decltype(args)>(args)...);
	};
}
