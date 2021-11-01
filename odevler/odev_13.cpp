#include <iostream>

template <typename T>
void foo(T) {}

template <typename T>
void bar(T&) {}

template <typename T>
void baz(const T&) {}

template <typename T>
void fun(T&&) {}

int main()
{
    foo(5);    // foo<int>(int)
    bar(5);    // error, T& cannot bind R-val for any T
    baz(5);    // baz<int>(const int&)
    fun(5);    // fun<int>(int&&)

    int x{ 478 };

    foo(x);    // foo<int>(int)
    bar(x);    // bar<int>(int&)
    baz(x);    // baz<int>(const int&)
    fun(x);    // fun<int&>(int&)

    const int cx{ 3456 };

    foo(cx);  // foo<int>(int)               (ref lik ve constluk duser)
    bar(cx);  // bar<const int>(const int&)  (constluk korunur)
    baz(cx);  // baz<int>(const int&)
    fun(cx);  // fun<const int&>(const int&) (her zaman referans, constluk korunur)

    int& r = x;

    foo(r);    // foo<int>(int)
    bar(r);    // bar<int>(int&)
    baz(r);    // baz<int<(const int&)
    fun(r);    // fun<int&>(int&)

    const int& cr{ cx };

    foo(cr);  // foo<int>(int)
    bar(cr);  // bar<const int>(const int&)
    baz(cr);  // baz<int>(const int&)
    fun(cr);  // fun<const int&>(const int&)
}
