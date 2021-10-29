//imzaları farklı overloading
// fonksiyon iablonları için imza (signature) kuralları farklı

template <typename T>
int func(T x) { return x; }


template <typename T>
double func(T x) { return x * 1.5; }

