#include <vector>
#include <string>
#include <type_traits>

template <typename T>
void process(std::vector<T>& vec, std::type_identity_t<T> val);

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

