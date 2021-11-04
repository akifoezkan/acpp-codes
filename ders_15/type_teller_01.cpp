//derleme zamanında derleyicinin yaptığı tür çıkarımının sonucunu elde etmek

template <typename T>
class TypeTeller;     //forward declaration

template <typename T>
void func(T)
{
	TypeTeller<T> x;
}


int main()
{
	int a[5]{};
	func(a);
}


/*
	error C2079 : 'x' uses undefined class 'TypeTeller<T>'
	with T = int*
	message: see reference to function template instantiation 'void func<int*>(T)' being compiled
	T = int*

*/
