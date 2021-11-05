template <unsigned base, unsigned exp>
struct Power {
	constexpr static unsigned value = base * Power<base, exp - 1>::value;
};

template <unsigned base>
struct Power<base, 0> {
	constexpr static unsigned value = 1u;
};

template <unsigned base, unsigned exp>
constexpr unsigned Power_v = Power<base, exp>::value;


int main()
{
	constexpr auto x = Power_v<4, 5>;
	constexpr auto y = Power_v<3, 4>;
}
