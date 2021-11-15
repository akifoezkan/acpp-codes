#include <iostream>

int main()
{
	int a[10] = { 0 };
	int(&r)[10] = a;
	//auto& r = a;
	//r is a
	for (int i = 0; i < 10; ++i)
		r[i] = i;

	for (auto val : r)
		std::cout << val << " ";
}
