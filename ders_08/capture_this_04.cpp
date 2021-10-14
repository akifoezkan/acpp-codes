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
		//auto f1 = [*this]{++mx; ++my;}; //gecersiz
		auto f1 = [*this]()mutable{++mx; ++my;}; //gecerli
		auto f2 = [starthis = *this]()mutable{++starthis.mx; ++starthis.my;}; //gecerli
		f1();
		f2();
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
