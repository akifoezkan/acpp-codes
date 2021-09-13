// Bir fonksiyonun geri dönüş değeri türünün const sınıf türü olması taşıma semantiğini bloke ediyor

struct Myclass {
	Myclass() = default;
	Myclass(const Myclass&) = default;
	Myclass(Myclass&&) = default;

	Myclass& operator=(const Myclass& )
	{
		std::cout << "copy assignment\n";
		return *this;
	}

	Myclass& operator=(Myclass&&)
	{
		std::cout << "move assignment\n";
		return *this;
	}
};


const Myclass foo() 
{
	Myclass mx;

	return mx;
}

int main()
{
	Myclass mx;

	mx = foo();  //copy assignment not move assignment
} 
