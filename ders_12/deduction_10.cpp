template <typename T>
class TypeTeller;

template <typename T>
void func(T&&)
{
	TypeTeller<T> x;

    // forwarding ref, T is either L-val ref or R-val ref
}

int main()
{
	func(5);        // T is int

	int ival{};
	func(ival);     // T is int &

	const int cx{20};
	func(cx);       //T is const int &

	func("mert");   // T is const char(&)[5]
}
