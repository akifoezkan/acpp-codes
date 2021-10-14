#include <iostream>

class Myclass {
public:
	Myclass() = default;
	Myclass(int a, int b) : mx{ a }, my{ b } {}
	void print()const
	{
		std::cout << "(" << mx << ',' << my << ")\n";
	}

	void func()
	{
		auto f1 = [=] {++mx; ++my; }; //deprecated
		auto f2 = [&] {++mx; ++my; }; 
		auto f3 = [this] {++mx; ++my; }; 
		f1();
		f2();
		f3();
	}
private:
	int mx{}, my{};
};

int main()
{
	Myclass mx{ 10, 20 };
	mx.func();
	mx.print();
}
