class Generator {
public:
	int generate();
};

int main()
{
	Generator gen;

	auto f = [gen]()mutable {return gen.generate(); };; //valid. non-const member function
}
