class A {
public:
	explicit A();
	explicit A(int);
};

int main()
{
	A a1 = 12;  //gecersiz
	A a2 = {};  //gecersiz
}
