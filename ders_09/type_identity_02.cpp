#include <vector>
#include <string>

// we disabled the type deduction for the parameter "val"

template <typename T>
struct typeidentity {
	using type = T;
};

template <typename T>
using typeidentity_t = typename typeidentity<T>::type;

template <typename T>
void process(std::vector<T>& vec, typeidentity_t<T> val) {};

int main()
{
	using namespace std;

	vector<int> ivec;
	process(ivec, 10);
	process(ivec, 'A');     // ok, type deduction is disabled for val

	vector<string> svec;
	string str{ "ali" };
	process(svec, str);
	process(svec, "can");     // ok, type deduction is disabled for val
}

