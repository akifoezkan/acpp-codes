#include <iostream>
#include <string>
#include <bitset>

template <typename... Args>
void print(Args &&... args)
{
    std::initializer_list<int>{((std::cout << std::forward<Args>(args) << "\n"), 0)...};
}


int main()
{
    auto f = [](auto&& ...args) {
        print(std::forward<decltype(args)>(args)...);
    };

    std::string str{ "necati" };
    std::bitset<16> bs = 534;

    f(12, 4.5, str, bs);
}
