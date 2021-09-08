Sentaks hatası olan kod satırlarını işaretleyiniz:

```
#include <utility>

class Myclass {
	//...
};

Myclass foo();
int func();

int main()
{
	Myclass x, y;
	int{} = 5;
	Myclass{} = x;
	foo() = x;
	func() = 10;
	Myclass&& mr = std::move(x);
	mr = y;
	int&& ir = 45;
	ir = 67;
}
```

