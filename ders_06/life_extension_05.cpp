#include <iostream>

class Myclass {};


const Myclass& f()
{
    Myclass x;
    //warning C4172 : returning address of local variable or temporary : x
    return x;
}
