int main()
{
	const int cx{ 74 };

	auto f = [cx]()mutable {++x; }; //invalid (const data member)
}
