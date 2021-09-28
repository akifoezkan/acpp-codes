class Myclass {};

Myclass&& f()
{
    //warning C4172: returning address of local variable or temporary
    return Myclass{};
}
