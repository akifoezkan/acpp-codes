#include <initializer_list>

int main()
{
	auto list = { 1, 2, 3, 4, 5 }; //std::initializer_list<int>

	*list.begin() = 10; //invalid
}
