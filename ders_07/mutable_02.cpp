int main()
{
	int x{ 10 };

	auto f = [x]()mutable {++x; }; //geçerli. non const member function
}
