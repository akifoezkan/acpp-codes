#include <vector>
#include <string>

template <typename T>
void insert(std::vector<T>& vec, T&& elem)
{
	vec.push_back(std::forward<T>(elem));
}

int main()
{
	std::vector<std::string> vec;
	std::string s;

	insert(vec, s); //gecersiz
	insert(vec, std::string{ "necati" }); //gecersiz
}
