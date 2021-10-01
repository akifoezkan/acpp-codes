int main()
{
	int a[10]{};

	auto f = [a]()mutable {a = nullptr; }; //invalid. a is an array not pointer
}
