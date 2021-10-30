### Aşağıdaki çağrılardan her birinde derleyicinin yaptığı çıkarım sonucu T türü için template argümanı olarak belirlenen türü yazınız. Sentaks hatası olan durumları ayrıca belirtiniz:

```
#include <cstdlib>

template <typename T>
void func(T*);

int foo(int);

int main()
{
	int* p = nullptr;
	int** ptr{ &p };
		
	func(*p);
	func(p);
	func(*ptr);
	func(**ptr);
	func(ptr);
	func(&ptr);
	func(foo);
	func(&foo);
	func("alican");
	func(nullptr);
	func(std::malloc(16));
}

```
