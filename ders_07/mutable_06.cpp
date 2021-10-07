int main()
{
	const int cx{ 74 };

	auto f = [cx]()mutable {++cx; }; //invalid (const data member)
}
