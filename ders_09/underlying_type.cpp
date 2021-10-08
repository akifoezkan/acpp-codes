#include <type_traits>

enum class color: unsigned char {white, gray, black};
enum class pos: unsigned int{off, on, hold};

int main()
{
	using namespace std;

	underlying_type_t<color> x{}; //unsigned char x
	underlying_type_t<pos> y{}; //unsigned int y
}
