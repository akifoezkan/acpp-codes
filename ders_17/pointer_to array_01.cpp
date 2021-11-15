#include <iostream>

int main()
{
	int a[10] = { 0 };
	int(*p)[10] = &a;
	//auto p = &a;
	//*p is a
	for (int i = 0; i < 10; ++i)
		(*p)[i] = i;

	for (auto val : *p)
		std::cout << val << " ";
}
