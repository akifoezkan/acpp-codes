
int main()
{
	auto f = [](int x) -> double {
		if (x > 10)
			return x;
		else
			return x * 1.5;
	};

    f(10);

    return 0;
}
