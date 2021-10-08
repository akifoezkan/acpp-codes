#include <functional>
#include <iostream>

int main()
{
    std::function<int(int, int)> gcd = [&](int a, int b) {
        return !b ? a : gcd(b, a % b);
    };

    std::cout << gcd(40, 72) << "\n";
}
