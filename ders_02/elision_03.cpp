#include <iostream>

class Myclass {
public:
	Myclass()
	{
		std::cout << "default ctor called\n";
	}

	Myclass(const Myclass&) = delete;
};


Myclass func()
{
	Myclass x;
	//use x
	return x; //error
}

int main()
{
	Myclass m{ func()};
}
