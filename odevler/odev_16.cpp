// Aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?
// __Sorunun yanıtı şu seçeneklerden biri de olabilir:__
//
// + Sentaks hatası *(syntax error)*
// + Tanımsız davranış *(undefined behavior)*
// + Derleyiciye göre değişir *(implementation defined)*

template<typename T>
T sum(T val)
{
	return val;
}

template<typename T, typename ...Args>
T sum(T val, Args... args)
{
	return val + sum<T>(args...);
}

#include <iostream>

int main()
{
	auto n1 = sum(0.25, 1, 0.75, 1);    // 3
	auto n2 = sum(1, 0.5, 1, 0.5);      // 2
	std::cout << n1  << " "<< n2 << " ";

}
