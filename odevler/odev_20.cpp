// Bu çalışma sorusu *Herb Sutter*'ın *"More exceptional C++"* isimli kitabından alınarak değiştirilmiştir. ;
// Aşağıdaki kodun standart çıkış akımına ne yazdıracağını tahmin etmeye çalışın. Daha sonra kodu derleyip çalıştırın. Yanıtınız %100 doğru ise C++ bilginiz ile gurur duyabilirsiniz. Her bir işlev çağrısı için derleyicinizin işlev şablon yüklemeleri ve özelleştirmeleri *(function template overloading – function template specialization)* arasından yaptığı seçimin nedenini anlamaya ve açıklamaya çalışın.


#include <cstdio>
#include <complex>

template<typename T1, typename T2>
void f(T1, T2) { putchar('0');}

template<typename T>
void f(T) { putchar('1'); }

template<typename T>
void f(T, T){ putchar('2'); }

template<typename T>
void f(T *) { putchar('3'); }

template<typename T>
void f(T*, T) { putchar('4'); }

template<typename T>
void f(T, T*) { putchar('5'); }

template<typename T>
void f(int, T *) { putchar('6'); }

template<>
void f<int>(int) { putchar('7'); }

void f(int, double) { putchar('8'); }

void f(int) { putchar('9'); }


// normal funcs > more specific > less specific
// f(x, y) : 8 > 6 > 5 = 4 > 2 > 0
//         : (int, double) > (int, T*) > (T, T*) = (T*, T) > (T, T) > (T1, T2)
//
// f(x)    : 9 > 3 > 7 > 1
//         : (int) > (T*) > (int) > (T)
//
// Note that 7 is a specialization of 1, thus it is not in the function overloading resolution set.


int main()
{
	int             i = 10;
	double          d = 2.3;
	float          ff = 7.8f;
	std::complex<double> c;

	f(i);         // a = 9
	f<int>(i);    // b = 7
	f(i, i);      // c = 2
	f(c);         // d = 1
	f(i, ff);     // e = 0
	f(i, d);      // f = 8
	f(c, &c);     // g = 5
	f(i, &d);     // h = 6
	f(&d, d);     // i = 4
	f(&d);        // j = 3
	f(d, &i);     // k = 0
	f(&i, &i);    // l = 2
}
