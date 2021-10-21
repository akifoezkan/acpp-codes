#include <charconv> 
#include <iostream>

int main()
{
	using namespace std;

	char str[] = "2765.98ali";
	int x{};

	if (auto [ptr, ec] = from_chars(str, str + size(str), x); ec == errc{}) {
		std::cout << "x = " << x << " idx = " << ptr - str << "\n";
	}
	else {
		std::cout << "'" << str << "' gecerli bir tam sayi degil\n";
	}

	double d{};

	if (auto [p, ec] = from_chars(str, str + size(str), d); ec == errc{}) {
		std::cout << "d = " << d << " idx = " << p - str << "\n";
	}
	else {
		std::cout << "'" << str << "' gecerli bir gercek sayi degil\n";
	}
}
