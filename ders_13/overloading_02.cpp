// Aşağıdaki kodda x.cpp ve y.cpp ayrı kod dosyaları.
// ODR ihlal edilmiyor ve tanımsız davranış yok

//x.cpp

template <typename T, typename U>
void func(T x, U y)
{
	//...
}

void f()
{
	func(12, 4.5);
}

//y.cpp

template <typename T, typename U>
void func(U x, T y)
{
	func(12, 4.5);
}

void g()
{
	func(12, 4.5);
}
