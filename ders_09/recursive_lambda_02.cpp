#include <functional>
#include <iostream>
#include <format>

int main()
{
    std::function<long long int(int)> factorial = [&](int x) {
        return x < 2 ? 1 : x * factorial(x - 1);
    };

    for (int i = 0; i < 20; ++i) {
        std::cout << std::format("{:2}! = {}\n", i, factorial(i));
    }
}
