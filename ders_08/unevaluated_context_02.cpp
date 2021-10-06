#include <iostream>
#include <set>

using namespace std;

int main()
{
	using cmptype = decltype([](int x, int y) {return y < x; });

	set<int, cmptype> myset{ 12, 5, 7, 3, 9, 1, 6 };

	for (int x : myset)
		cout << x << " ";
}
