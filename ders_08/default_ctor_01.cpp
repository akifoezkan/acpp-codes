// # c++20 unevaluated context for lambdas are allowed
// # c++17 decltype(lambda), default ctor is deleted
//   c++20 decltype(lambda), default ctor is not deleted when lambda is stateless

int main()
{
	auto f1 = [](int x) {return x * x; };
	auto f2 = f1;

	decltype(f1) f3;    // C++20
	f1 = f3;            // C++20, gecerli stateless lambda

	int x{ 20 };

	auto f4 = [x](int a) {return a * x; };
	// decltype(f4) f5; // gecersiz (stateless lambda değil)
    // error: use of deleted function 'main()::<lambda(int)>::<lambda>()'

	auto f6 = f4;
	// f6 = f4;  //gecersiz (stateless lambda değil)
}
