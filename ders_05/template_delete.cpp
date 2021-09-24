template <typename T>
void func(T) = delete;

//this function can be called with int argument only.
void func(int);

int main()
{
	func(12); //gecerli
	func(1.2); //gecersiz
	func(1.2f); //gecersiz
	func(1L); //gecersiz
	func('1'); //gecersiz
}
