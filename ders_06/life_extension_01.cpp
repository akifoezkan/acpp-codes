#include <iostream>

class Myclass {};

void f(const Myclass&);
void g(Myclass&&);

Myclass foo()
{
    Myclass x;
    //...
    return x;
}

Myclass bar()
{
    return Myclass{};
}

int main()
{
    f(Myclass{}); //lifetime extension
    g(Myclass{}); //lifetime extension
    const Myclass& r1 = Myclass{}; //lifetime extension
    Myclass&& r2 = Myclass{}; //lifetime extension
    const Myclass& r3 = foo(); //lifetime extension
    Myclass&& r4 = foo(); //lifetime extension
    const Myclass& r5 = bar(); //lifetime extension
    Myclass&& r6 = bar(); //lifetime extension
    f(foo()); //lifetime extension
    f(bar()); //lifetime extension
    g(foo()); //lifetime extension
    g(bar()); //lifetime extension
}
