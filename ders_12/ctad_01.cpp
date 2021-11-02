#include <vector>

int main()
{
	using namespace std;

	vector x{ 1, 2, 3 };    // vector<int> x;
	vector y{ x, x };       // vector<vector<int>> y;
	vector z{x};            // vector<int> z;
}
