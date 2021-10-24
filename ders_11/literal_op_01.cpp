#include <iostream>
#include <iomanip>

void operator""_print(const char* p)
{
	std::cout << std::quoted(p);
}

int main()
{
	78345_print;
}
