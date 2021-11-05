#include <type_traits>

int main()
{
	constexpr auto x = std::integral_constant<int, 5>{} + std::integral_constant<int, 3>{};
	constexpr auto y = std::integral_constant<int, 5>{}() + std::integral_constant<int, 3>{}();
}
