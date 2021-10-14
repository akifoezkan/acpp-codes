#include <iostream>

class Myclass {
public:
	Myclass() = default;
	Myclass(int a, int b) : mx{ a }, my{ b } {}

	void func()
	{
		int a = 5;
		auto f1 = [=] {return a * (mx + my); }; //deprecated
		auto f2 = [&] {return a * (mx + my); }; 
		auto f3 = [a, this] {return a * (mx + my); }; 
		auto f4 = [=, this] {return a * (mx + my); }; //C++20
		auto f5 = [&, this] {return a * (mx + my); }; 
	}
private:
	int mx{}, my{};
};
