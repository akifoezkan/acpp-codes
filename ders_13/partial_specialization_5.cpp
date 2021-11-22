// partial specialization kendi template function indan daha fazla parametre alabilir

#include <iostream>

template <typename T>
struct Myclass {
	Myclass()
	{
		std::cout << "primary template\n";
	}
};

template <typename T, typename U>
struct Myclass<std::pair<T, U>> {
	Myclass()
	{
		std::cout << "Myclass<std::pair<T, U>> specialization>\n";
	}
};

int main()
{
	Myclass<int> m1;
	Myclass<std::pair<int, float>> m2;
	Myclass<std::pair<char, char>> m3;
}
