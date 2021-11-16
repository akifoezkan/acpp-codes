#include <functional>

using FuncType = int(int);

int foo(int);
FuncType f; //function declaration

int main()
{
	FuncType* fp1 = foo; //fp1 is a function pointer
	FuncType* fp2 = f;  //fp2 is a function pointer
	FuncType** ff = &fp1; //ff is pointer to function pointer
	std::function<FuncType> func(foo);
}
