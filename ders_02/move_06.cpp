#include <iostream>

class Myclass {
public:
	Myclass()
	{
		std::cout << "default ctor\n";
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

int main()
{
	Myclass &&r = Myclass{};
	//temporary materialization default ctor called
	Myclass x = r; //copy ctor cagrilacak cunku r bir lvalue ifadesi
	Myclass y = std::move(r); //move ctor cagrilacak cunku r bir std::move(r) bir rvalue ifadesi
}
