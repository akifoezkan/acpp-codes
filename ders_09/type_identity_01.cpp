#include <vector>
#include <string>

template <typename T>
void process(std::vector<T>& vec, T val) {};

int main()
{
	using namespace std;

	vector<int> ivec;
	process(ivec, 10);
	// process(ivec, 'A'); //gecersiz, types are different

	vector<string> svec;
	string str{ "ali" };
	process(svec, str);
	// process(svec, "can"); //gecersiz, T = string, "can" = cstring
}

