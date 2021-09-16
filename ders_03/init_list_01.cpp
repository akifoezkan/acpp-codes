#include <initializer_list>
#include <iostream>

class Nec {
public:
	Nec()
	{
		std::cout << "default ctor\n";
	}

	Nec(const Nec&)
	{
		std::cout << "copy ctor\n";
	}

	Nec(Nec &&)
	{
		std::cout << "move ctor\n";
	}
};

int main()
{
	auto x = { Nec{}, Nec{}, Nec{} }; //copy elision
}
