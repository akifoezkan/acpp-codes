class Myclass {};

const Myclass& f()
{
    //warning C4172: returning address of local variable or temporary
    return Myclass{};
}

int main()
{
    const Myclass& r = f();
}
