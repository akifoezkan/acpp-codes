int g = 20;

int& foo()
{
	return g;
}

int main()
{
	auto f = []() {return foo(); };

	f() = 10; //invalid (prvalue expression)
}
