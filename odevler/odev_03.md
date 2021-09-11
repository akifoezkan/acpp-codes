```
struct Nec {
	int mx;
};

void f1();
Nec f2();
Nec& f3();
Nec&& f4();
Nec* f5();
Nec** f6();

int main()
{
	// f1
        // f1()
	// f2()
	// f2().mx
	// f3()
	// f3().mx
	// f4()
	// f5()
	// *f5()
	// f5()->mx
	// f6()
	// *f6()
	// **f6()
	// []{}
        // []{}()
	// std::move(f1)
}
```

Yukarıdaki bildirimlere göre _main_ fonksiyonu içinde yazılan her bir ifadenin _(expression)_ birincil değer kategorilerini _(primary value category)_ yazınız.

