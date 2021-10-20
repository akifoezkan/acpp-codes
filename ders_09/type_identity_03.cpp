#include <vector>
#include <string>
#include <type_traits>
#include <iostream>

template <typename T>
void process(std::vector<T>& vec, std::type_identity_t<T> val)
{
    std::cout << vec.size() << " " << val << "\n";
}

int main()
{
	using namespace std;

	vector<int> ivec;
	process(ivec, 10);
	process(ivec, 'A');
	vector<string> svec;
	string str{ "ali" };
	process(svec, str);
	process(svec, "can");
}

