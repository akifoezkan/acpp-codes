#include <vector>
#include "nutility.h"
#include <algorithm>

int main()
{
	using namespace std;

	vector<string> svec;
	rfill(svec, 100, rname);

	const auto f = [](const std::string& s1, const std::string s2) {
		return s1.length() < s2.length() || (s1.length() == s2.length() && s1 < s2);
	};

	sort(svec.begin(), svec.end(), f);
	print(svec);
}
