int main()
{
	int x{ 10 };

	auto f = [x] {++x; }; //geçersiz. const member function
}
