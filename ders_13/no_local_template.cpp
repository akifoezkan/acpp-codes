#include <iostream>
//yerel düzeyde şablon oluşturulamaz

//gecersiz
void func()
{
	template <typename T>
	class Myclass {

	};
}

//gecersiz
void foo()
{
	template <typename T>
	using Ptr = T*;
}
