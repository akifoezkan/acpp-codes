template <typename T>
void func(T& x, T& y);

int main()
{
	int a[3]{};
	const int b[3]{1, 2, 3};
	int c[3]{1, 2, 3};
	int d[4]{1, 2, 3, 4};

	func(a, b); // gecersiz, T = int[3] vs T = const int[3]
	func(a, c);
	func(a, d); // gecersiz, T = int[3] vs T = int[4]
	func("ahmet", "halil");     // gecerli, T = const char[6]
	//func("ahmet", "mehmet");  // gecersiz, T = const char[6] vs T = const char[7]
}
