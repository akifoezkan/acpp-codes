// [1] C++11 öncesi araçları kullanarak Fibonacci serisinin n. teriminin derleme
//     zamanında hesaplanmasını sağlayacak aşağıdaki meta fonksiyonu yazınız:
//   # *main* işlevinde *a* dizisinin boyutu *Fibonacci* serisinin *11.* terimi
//     olan *89* olmalı.
//
// [2] Yine *Fibonacci* serisinin *n.* teriminin derleme zamanında hesaplanmasını
//     sağlayacak bir *constexpr* işlevi özyinelemeli *(recursive)* olarak gerçekleştirin:
//
// [3] Son olarak, C++14 standartlarıyla olanakları genişletilen *constexpr*
//     işlev yapısını kullanarak aynı işlevi özyinelemeli olmayan *(iterative)*
//     biçimde gerçekleştirin.

// 1
template <unsigned int n>
struct Fibonacci {
	static unsigned const value = Fibonacci<n - 1>::value + Fibonacci<n - 2>::value;
};

template<>
struct Fibonacci<1> { static unsigned const value = 1; };

template<>
struct Fibonacci<0> { static unsigned const value = 0; };

template<unsigned int n>
constexpr unsigned Fibonacci_v = Fibonacci<n>::value;

// 2
constexpr unsigned int fibonacci(unsigned int n)
{
    if (n < 2)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// 3
// 0, 1, 1, 2,
constexpr unsigned int fibo(unsigned int n)
{
    if (n < 2)
        return n;

    unsigned cur{1};
    unsigned prev{1};
    unsigned prev_prev{0};
    for(unsigned i = 2; i < n; ++i)
    {
        prev_prev = prev;
        prev = cur;
        cur = prev + prev_prev;
    }

    return cur;
}

#include <iostream>

int main()
{
    static_assert(Fibonacci_v<11> == 89, "incorrect result");
	int a[Fibonacci<11>::value] = { 0 };
	int b[fibonacci(11)] = { 0 };
	int c[fibo(11)] = { 0 };

    std::cout << Fibonacci_v<0> << " " << Fibonacci_v<1> << " " << Fibonacci_v<11> << "\n";
    std::cout << fibonacci(0) << " " << fibonacci(1) << " " << fibonacci(11) << "\n";
    std::cout << fibo(1) << " " << fibo(2) << " " << fibo(3) << " " << fibo(11) << "\n";
}
