int main()
{
	auto f = [](int x) {
		if (x > 10)
			return x;
		else
			return x * 1.5;  //invalid (ambiguity)
	}
}
