#include <iostream>
#include <vector>
#include <algorithm>

int f(int x)
{
	std::cout << "f(int x) called x = " << x << '\n';
	//...
	return x;
}

double f(double x)
{
	std::cout << "f(double x) called x = " << x << '\n';

	//...
	return x;
}

long f(long x)
{
	std::cout << "f(long x) called x = " << x << '\n';
	//...
	return x;
}

int main()
{
	using namespace std;

	vector<int> ivec{ 1, 2, 3, 4, 5 };
	//for_each(ivec.begin(), ivec.end(), f); //gecersiz
	for_each(ivec.begin(), ivec.end(), static_cast<int(*)(int)>(f)); //gecerli
	vector<double> dvec{ 1.1, 2.2, 3.3, 4.4, 5.5};
	//for_each(ivec.begin(), ivec.end(), f); //gecersiz
	std::cout << "\n";
	for_each(dvec.begin(), dvec.end(), static_cast<double(*)(double)>(f)); //gecerli
}
