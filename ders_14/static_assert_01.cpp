template <typename T>
void func(T)
{
	//static_assert(sizeof(T) > 4); //C++17
	static_assert(sizeof(T) > 4, "sizeof myst be greater than 4");
}

int main()
{
	func(2.3);
	func(12); //error
}
