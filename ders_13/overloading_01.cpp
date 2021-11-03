// imzaları farklı overloading
// fonksiyon sablonları için imza (signature) kuralları farklı
// => return type imzanin bir parcasi

template <typename T>
int func(T x) { return x; }

template <typename T>
double func(T x) { return x * 1.5; }

