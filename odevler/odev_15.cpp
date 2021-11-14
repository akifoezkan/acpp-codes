#include <iostream>
#include <initializer_list>

void print(int x)
{
    std::cout << x << ' ';
}

// gelen tüm argümanlar ile (gönderildikleri sırayla) print işlevi bir kez çağrılacak
template <typename ...Ts>
void call(Ts ...args)
{
    (print(args), ...);
}

template <typename ...Ts>
void call2(Ts ...args)
{
    (void)std::initializer_list<int>{(print(static_cast<int>(args)), 0)...};
}

template <typename ...Ts>
void call3(Ts ...args)
{
    int a[]{ (print(args), 0)... };
}


// gelen tüm argümanlar ile (gönderildikleri sırayla ters) print işlevi bir kez çağrılacak
template <typename ...Ts>
void reverse_call(Ts ...args)
{
    const auto arglist = {args...};

    for(auto&& arg = crbegin(arglist); arg != crend(arglist); ++arg)
    {
        print(*arg);
    }

}

template <typename ...Ts>
void reverse_call2(Ts ...args)
{
    auto f = [](auto param, auto ...params){
        if constexpr (sizeof...(params) > 0)
            reverse_call2(params...);

        print(param);
    };

    f(args...);
}


int main()
{
    //1 2 3 4 5
    call(1, 2, 3, 4, 5);
    std::cout << "\t";
    call2(1, 2, 3, 4, 5);
    std::cout << "\t";
    call3(1, 2, 3, 4, 5);
    std::cout << "\n";

    reverse_call(1, 2, 3, 4, 5);  //5 4 3 2 1
    std::cout << "\t";
    reverse_call2(1, 2, 3, 4, 5);  //5 4 3 2 1
    std::cout << "\n";
}
