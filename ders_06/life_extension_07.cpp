#include <iostream>

class Myclass {
public:
    ~Myclass()
    {
        std::cout << "Destructor\n";
    }
};

const Myclass& foo(const Myclass& r)
{
    return r;
}

int main()
{
    const Myclass& r = foo(Myclass{});
    std::cout << "main devam ediyor\n";
}
