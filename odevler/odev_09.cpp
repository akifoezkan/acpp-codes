// Aşağıdaki kodda tanımsız davranıoş var mı?
// g++ -std=c++20 -pedantic -Wall -Wextra -fsanitize=address -fsanitize=undefined -fno-sanitize-recover=all -fsanitize=float-divide-by-zero -fsanitize=float-cast-overflow -fno-sanitize=null -fno-sanitize=alignment odev_09.cpp

#include <string_view>
#include <iostream>


template<typename T>
T concat(const T& x, const T& y)
{
    // undefined behaviour:
    // concat(sv + sv) will return string
    // but since T = string_view,
    // result of operator+ will be stored in a temporary variable (otomatik omurlu)
    // and concat (this function) will return a string_view to a temp object.

	return x + y;
}

std::string operator+ (std::string_view sv1, std::string_view sv2)
{
    // returns a new string (move semantic will kick in)

	return std::string(sv1) + std::string(sv2);
}

int main()
{
	std::string_view sv = "Merhaba";
	auto val = concat(sv, sv);          // ub: T = s_view, val refers to a dangling string pointer
	std::cout << val << '\n';
}
