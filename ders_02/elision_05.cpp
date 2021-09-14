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


Myclass func(Myclass x);

int main()
{
	Myclass mx; //default ctor
	Myclass my{ func(mx) }; //
}

//returns parameter no NRVO

Myclass func(Myclass x)
{
	//use x;
	return x;
}
