#include <iostream>
#include <string>

template <typename Derived>
struct PrintNTimes {
public:
	void nprint(std::size_t n) const
	{
		while (n--) {
			static_cast<const Derived&>(*this).print();
		}
	}
};

class Person : public PrintNTimes<Person> {
public:
	Person(std::string name, std::string surname) : m_name{ std::move(name) }, m_surname{ std::move(surname) } {}

	void print()const
	{
		std::cout << m_name << " " << m_surname << '\n';
	}

private:
	std::string m_name;
	std::string m_surname;
};

int main()
{
	Person p{ "Murat", "Hepeyiler" };

	p.nprint(10);
}


