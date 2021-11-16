
template <typename T>
struct Data {
	T x;
};

int main()
{
	Data d1 = { 10 }; //C++17'de gecersiz C++20'de gecerli
	// Data d2(10); //gecersiz
	Data d3{ 10 }; //C++17'de gecersiz C++20'de gecerli
	//Data d4 = 10; //gecersiz
}
