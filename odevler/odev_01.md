```
#include <utility>
#include <algorithm>
#include <iterator>

int main()
{
	int x = 10;
	int y = 20;
	int z = 30;
	int a[5]{};
	int* ptr{ a };
	int& r = x;
	int&& rr = 10;

	// x
	// &x
	// +x
	// x + 5
	// ++x
	// y--
	// a
	// a[3]
	// *a
	// r
	// rr
	// ptr
	// *ptr
	// ptr[2]
	// &ptr
	// nullptr
	// void()
	// (x, y)
	// std::move(x)
	// x ? y : z
	// x ? 10 : y
	// x = y
	// y += x
		// std::move(r)
	// std::move(rr)
	// x == y
	// (r, *ptr)
	// 'A'
	// "a"
	// static_cast<double>(x)
	// static_cast<int&>(x)
	// static_cast<int&&>(x)
	// std::max(x, y)
	// std::max({ 2, 5, 6 });
	// std::begin(a)
}

```

Yukarıdaki bildirimlere göre _main_ fonksiyonu içinde yazılan her bir ifadenin _(expression)_ birincil değer kategorilerini _(primary value category)_ yazınız.
