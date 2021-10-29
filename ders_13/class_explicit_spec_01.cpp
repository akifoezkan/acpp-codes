#include <iostream>

template <typename T>
struct Myclass {
	Myclass()
	{
		std::cout << "primary template\n";
	}
};


template <>
struct Myclass<char> {
	Myclass()
	{
		std::cout << "Myclass<char>\n";
	}
};

template <>
struct Myclass<float> {
	Myclass()
	{
		std::cout << "Myclass<float>\n";
	}
};

int main()
{
	Myclass<int> m1;
	Myclass<double> m2;
	Myclass<char> m3;
	Myclass<float> m4;
}
