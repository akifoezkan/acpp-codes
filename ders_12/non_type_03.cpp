// 14.3.2 clause 1:
// A template-argument for a non-type, non-template template-parameter shall be one of:
//
// - an integral constant-expression of integral or enumeration type; or
// - the name of a non-type template-parameter; or
// - the address of an object or function with external linkage, including function templates and function template-ids but excluding non-static class members, expressed as & id-expression where the & is optional if the name refers to a function or array, or if the corresponding template-parameter is a reference; or
// - a pointer to member expressed as described in 5.3.1

#include <iostream>

template <const char *p>
class Nec {};

template <const int* p>
class Neco {};

int a[] = {5};  // external linkage
char s[] = "necati";  // external linkage
const char cs[] = "ergin";

int main()
{
//  Nec<"alican"> n1; //gecersiz

	char str[] = "mustafa";
//  Nec<str> n2; //gecersiz

	Nec<s> n3;
	Nec<cs> n4;

    s[2] = 'a';
	Nec<s> n5;

    Neco<a> b;
}
