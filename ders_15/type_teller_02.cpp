#include <initializer_list>
#include <iostream>


template <typename ...Args>
class TypeTeller;

template <typename ...Args>
void func(Args ...)
{
	TypeTeller<Args...> x;
}


int main()
{
	func(1, 2.3, 16L, "mustafa");
}

/*
	'x' uses undefined class 'TypeTeller<int,double,long,const char *>'
	see reference to function template instantiation 
	'void func<int,double,long,const char*>(int,double,long,const char *)' being compiled

*/
