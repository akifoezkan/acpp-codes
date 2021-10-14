#include <set>
#include <vector>
#include <functional>
#include <algorithm>

int main()
{
	using namespace std;

	set<int, greater<>> myset;
	//..
	vector<int> ivec(100);
	//..
	sort(ivec.begin(), ivec.end(), greater{});
}
