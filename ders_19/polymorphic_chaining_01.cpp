#define _CRT_SECURE_NO_WARNINGS

#include <ostream>

class Printer {
public:
	Printer(std::ostream& os) : m_os{ os } {}

	template <typename T>
	Printer& print(const T& tval)
	{
		m_os << tval;
		return *this;
	}

	template <typename T>
	Printer& print_line(const T& tval)
	{
		m_os << tval << '\n';
		return *this;
	}
private:
	std::ostream& m_os;
};

#include <iostream>

class ConsolePrinter : public Printer {
public:
	ConsolePrinter() : Printer{ std::cout } {}

	ConsolePrinter& set_color(int)
	{
		return *this;
	}

};

int main()
{
	ConsolePrinter().print("Kaveh Nematipour").set_color(661).print_line(9763.354);  //invalid
                                                   ----------------
}

