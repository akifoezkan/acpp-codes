// Şablon tür parametresi *(T)* olan türün *Nec* isimli bir içsel türe
// *(nested type)* sahip olup olmadığını sorgulayacak *hasTypeNec* isimli
// sınıf şablonunu kodlayınız:
//
// Sınıfın *constexpr* olan *bool* türden *value* isimli öğesi, eğer şablon tür parametresi olan *T* türü *Nec* isimli bir içsel türe sahip ise *true* aksi halde *false* değere sahip olmalı. Yazdığınız sınıf şablonunu aşağıdaki test kodu ile sınayınız:

#include <type_traits>

template <typename T, typename _ = void>
struct hasTypeNec {
	static constexpr bool value = false;
};


template <typename T>
struct hasTypeNec<T, std::void_t<typename T::Nec>> {
	static constexpr bool value = true;
};



struct A {
	typedef int Nec;
};

struct B {};

#include <iostream>

int main()
{
	constexpr bool b1 = hasTypeNec<A>::value;
	constexpr bool b2 = hasTypeNec<B>::value;
	constexpr bool b3 = hasTypeNec<int>::value;

	std::cout << b1 << b2 << b3; //100
}
