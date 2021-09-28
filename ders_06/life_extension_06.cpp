class Myclass { };

Myclass foo()
{
	Myclass x;

	return x;
}

const Myclass& f()
{
	//warning C4172 : returning address of local variable or temporary : x
	return foo();
}
