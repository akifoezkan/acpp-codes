#include <iostream>
class A {
public:
	A();
};

void func(A){ std::cout << "akif\n"; };

int main()
{
	func({});

    return 0;
}
