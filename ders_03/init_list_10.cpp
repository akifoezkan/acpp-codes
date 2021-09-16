#include <initializer_list>
#include <vector>

void foo(int);

int main()
{
	int x, y, z;
	
	std::vector<int> vec{ x, y, z, 20, 50 };
	//...
	for (auto i : {2, 3, 5, 7, 11, 13})
		foo(i);
}
