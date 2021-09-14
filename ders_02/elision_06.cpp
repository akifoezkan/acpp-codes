//mandatory elision example

#include <iostream>

class Myclass {
public:
	Myclass(const char *)
	{
		std::cout << "Myclass(const char *)\n";
	}

	Myclass(const Myclass&)
	{
		std::cout << "copy ctor\n";
	}

	Myclass(Myclass&&)
	{
		std::cout << "move ctor\n";
	}
};


Myclass foo()
{
	return "necati";
}

Myclass bar()
{
	return foo();
}

int main()
{
	auto x = bar();
}
