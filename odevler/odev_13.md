### Aşağıdaki çağrılardan her birinde derleyicinin yaptığı çıkarım sonucu T türü için template argümanı olarak belirlenen türü yazınız. Sentaks hatası olan durumları ayrıca belirtiniz:

```cpp
template <typename T>
void foo(T);

template <typename T>
void bar(T&);

template <typename T>
void baz(const T&);

template <typename T>
void func(T&&);


int main()
{
	foo(5);
	bar(5);
	baz(5);
	func(5);

	int x{ 478 };
	
	foo(x);
	bar(x);
	baz(x);
	func(x);

	const int cx{ 3456 };
	foo(cx);
	bar(cx);
	baz(cx);
	func(cx);

	int& r = x;

	foo(r);
	bar(r);
	baz(r);
	func(r);

	const int& cr{ cx };

	foo(cr);
	bar(cr);
	baz(cr);
	func(cr);
}

```

