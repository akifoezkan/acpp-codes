class X {
	//...
};

class A {
public:
	A(X);
	//...
};

int main()
{
	A ax1(X()); //function declaration not object instantiation (most vexing parse)
	A ax2(X(*)()); // same as above 
	A ax3((X())); // object instantiation
	A ax4(X{}); // object instantiation
	A ax5{ X()}; // object instantiation
}
