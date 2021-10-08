#include <iostream>

class Myclass {
//...
public:
	decltype([](int x) {return 2 * x + 3; }) f; // C++20
};

int main()
{
    Myclass a;
    std::cout << a.f(3) << "\n";

    return 0;
}
