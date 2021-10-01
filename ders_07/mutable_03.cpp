class Generator {
public:
	int generate();
};

int main()
{
	Generator gen;

	auto f = [gen] {return gen.generate(); };; //invalid. const member function
}
