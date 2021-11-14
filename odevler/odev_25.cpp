// C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?
//
// 111, signatures of the instantiated functions are different, thus the declared count variables

#include <iostream>

template<typename T>
void func(T x)
{
	static int count = 0;
	++count;
	std::cout << count;
}

int main()
{
	char c1 = 0;
	signed char c2 = 0;
	unsigned char c3 = 0;

	func(c1);
	func(c2);
	func(c3);
}
