class A {
public:
	A();
};

void func(A);

int main()
{
	func({});
}
