// Aşağıdaki kodda tanımsız davranış var mı?
// compile with:
// g++ -std=c++20 -pedantic -Wall -Wextra -fsanitize=address -fsanitize=undefined -fno-sanitize-recover=all -fsanitize=float-divide-by-zero -fsanitize=float-cast-overflow -fno-sanitize=null -fno-sanitize=alignment odev_10.cpp


#include <iostream>
#include <string_view>
#include <algorithm>

std::string_view get_reverse(std::string str)
{
	reverse(begin(str), end(str));

    // undefined behaviour:
    // string_view object is created for returning the input parameter str,
    // which is a temporary variable and won't live after the function call.

	return str;
}

int main()
{
	auto s = get_reverse("necati ergin");

	std::cout << s << "\n";
}
