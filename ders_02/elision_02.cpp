// named return value optimization
// it is not mandatory

#include <iostream>

class Myclass {
public:
	Myclass()
	{
		std::cout << "default ctor called\n";
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


Myclass func()
{
	Myclass x;
	//use x
	return x;
}

int main()
{
	Myclass m{ func()};
}
