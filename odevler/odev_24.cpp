// #### Aşağıdaki C++ programı hakkında yorum yapınız:
//
// + sentaks hatası
// + tanımsız davranış
// + derleyiciye göre değişir
// + ekrana şunu yazar:

// C
// B (spec. of A) is not in the function overload set

#include <iostream>

template<class T>
void func(T)
{
	std::cout << 'A';
}

template<>
void func<>(int*)
{
	std::cout << 'B';
}

template<class T>
void func(T*)
{
	std::cout << 'C';
}

int main()
{
	int *ptr = nullptr;
	func(ptr);
}
