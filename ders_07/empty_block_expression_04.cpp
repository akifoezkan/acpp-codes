class A {
public:
	A();
};

template <typename T>
void func(T, T);

int main()
{
	func(A{}, {});
}
