#include <bitset>
#include <array>

template <size_t n>
class Myclass {};

template <typename T, size_t N>
void func(const std::array<T, N>&);

template <typename T, size_t N>
constexpr std::size_t asize(const T(&)[N])
{
	return N;
}

int main()
{
	std::bitset<16> x = 45u;
	std::array<std::bitset<32>, 10> y;
	int a[5]{};
	constexpr auto size = asize(a);
}
