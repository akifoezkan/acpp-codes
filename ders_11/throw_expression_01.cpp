//throw expression is an expression:)
// throw expressions are of type void

#include <type_traits>


int main()
{
	constexpr auto b = std::is_same_v<void, decltype(throw 5)>;
	//b is true
}
