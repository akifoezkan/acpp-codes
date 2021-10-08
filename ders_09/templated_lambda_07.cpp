int main()
{
	auto f = []<typename T>(T x) { return x + 5; };

	auto n = f.operator() < int > (10);
}
