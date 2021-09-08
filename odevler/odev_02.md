```
#include <utility>

struct Nec {
	int mx;
};

int main()
{
	Nec nec{ 10 };
	const Nec nec{ 10 };

	// nec
	// cnec
	// &nec
	// nec.x
	// std::move(nec)
	// std::move(cnec)
	// nec{}
	// nec{}.x
	// throw nec;
	// static_cast<Nec&&>(nec)
}
```

Yukarıdaki bildirimlere göre _main_ fonksiyonu içinde yazılan her bir ifadenin _(expression)_ birincil değer kategorilerini _(primary value category)_ yazınız.
