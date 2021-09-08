```
#include <utility>

struct Nec {
	int mx;
};

int main()
{
	Nec nec{ 10 };
	const Nec nec{ 10 };

	// nec
	// cnec
	// &nec
	// nec.x
	// std::move(nec)
	// std::move(cnec)
	// nec{}
	// nec{}.x
	// throw nec;
	// static_cast<Nec&&>(nec)
}
```
