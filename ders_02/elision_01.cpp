#include <iostream>

class Myclass {
public:
	Myclass()
	{
		static int count{};
		std::cout << "default ctor called " << ++count << " times\n";
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


void func(Myclass x) 
{
	//...
}

Myclass foo()
{
	return Myclass{};
}

int main()
{
	Myclass x = Myclass{};
	Myclass y = Myclass{ Myclass{ Myclass{} } };
	func(Myclass{});
	Myclass z{ foo() };
	Myclass t{ Myclass{foo()} };

}
