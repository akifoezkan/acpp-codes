template <typename T>
void func(T param);

template <typename T>
void foo(T& param);

int f(int);

int main()
{
	func(f); //T is int (*)(int)    int(*param)(int)
	foo(f);  //T is int(int)        int(&param)(int)

	func(&f);  //T is int (*)(int)    int(*param)(int)
	//foo(&f); //error
}


