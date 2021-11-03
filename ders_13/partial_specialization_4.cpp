#include <iostream>

template <typename T>
struct Myclass {
	Myclass()
	{
		std::cout << "primary template\n";
	}
};

template <typename T>
struct Myclass<T[]> {
	Myclass()
	{
		std::cout << "Myclass<T[]> specialization>\n";
	}
};

int main()
{
	Myclass<int[5]> m1;         // primary
	Myclass<double[10]> m2;     // primary
	Myclass<int []> m3;
	Myclass<double[]> m4;
}
