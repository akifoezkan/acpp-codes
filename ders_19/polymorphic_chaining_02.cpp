#include <ostream>

template <typename ConcretePrinter>
class Printer {
public:
	Printer(std::ostream& os) : m_os{ os } {}

	template <typename T>
	ConcretePrinter& print(const T& tval)
	{
		m_os << tval;
		return static_cast<ConcretePrinter&>(*this);
	}

	template <typename T>
	ConcretePrinter& print_line(const T& tval)
	{
		m_os << tval << '\n';
		return static_cast<ConcretePrinter&>(*this);
	}
private:
	std::ostream& m_os;
};

#include <iostream>

class ConsolePrinter : public Printer<ConsolePrinter> {
public:
	ConsolePrinter() : Printer{ std::cout } {}

	ConsolePrinter& set_color(int)
	{
		return *this;
	}

};

int main()
{
	ConsolePrinter().print("Kaveh Nematipour ").set_color(661).print_line(9763.354);  
                                              --------------
}
