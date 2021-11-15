void foo(int* p, int size);
void bar(int (*p)[10]);
void baz(int(&ar)[10]);

int main()
{
	int a[10] = { 0 };
	
	foo(a, 10);
	bar(&a);
	baz(a);
}
