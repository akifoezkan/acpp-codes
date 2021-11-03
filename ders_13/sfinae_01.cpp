// #1
template <typename T>
typename T::iterator func(T x);

// #2
template <typename T>
T func(T x);

int main()
{
	int* p{};

	func(p);  // #1 is sfinaed out
              // #2 is chosen
              // Note that there is no compiler error
}
