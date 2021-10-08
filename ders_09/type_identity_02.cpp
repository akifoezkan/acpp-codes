#include <vector>
#include <string>

template <typename T>
struct typeidentity {
	using type = T;
};

template <typename T>
using typeidentity_t = typename typeidentity<T>::type;

template <typename T>
void process(std::vector<T>& vec, typeidentity_t<T> val);

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

