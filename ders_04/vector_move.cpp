#include <iostream>
#include <vector>


class Nec {
public:
	Nec() = default;
	Nec(const Nec&)
	{
		std::cout << "copy ctor\n";
	}

	Nec(Nec&&)
	{
		std::cout << "move ctor\n";
	}
};

int main()
{
	std::vector<Nec> xvec(100);
	//std::vector<Nec> yvec = xvec;  //copy ctor O(n)
	std::vector<Nec> yvec = std::move(xvec);  //move ctor O(1)
}
