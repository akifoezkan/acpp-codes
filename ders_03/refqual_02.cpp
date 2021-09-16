#include <iostream>

class Myclass {
public:
	void func()&
	{
		std::cout << "Myclass::func()&\n";
	}

	void func()const &
	{
		std::cout << "Myclass::func()const &\n";
	}

	void func()&&
	{
		std::cout << "Myclass::func()&&\n";
	}

	void func()const &&
	{
		std::cout << "Myclass::func()const &&\n";
	}
};

int main()
{
	Myclass x;
	const Myclass cx;

	x.func(); //func()&
	cx.func(); //func()const &
	Myclass{}.func(); //func()&&
	std::move(x).func(); //func()&&
	std::move(cx).func(); //func()const &&

}
