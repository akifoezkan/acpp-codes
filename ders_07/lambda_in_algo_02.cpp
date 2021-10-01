#include <vector>
#include "nutility.h"
#include <algorithm>

int main()
{
	using namespace std;

	vector<string> svec;
	rfill(svec, 20, rname);
	print(svec);
	cout << "enter the length: ";
	size_t len;
	cin >> len;
	if (auto iter = find_if(svec.begin(), svec.end(),
		[len](const string& s) {return s.length() == len; }); iter != svec.end()) {
		std::cout << "found " << *iter << " index = " << distance(svec.begin(), iter) << "\n";
	}
	else {
		std::cout << "not found\n";
	}
}
