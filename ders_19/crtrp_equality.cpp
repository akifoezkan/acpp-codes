#include <iostream>
#include <string>

template <typename Der>
struct Equality {
	const Der& derived()const
	{
		return static_cast<const Der&>(*this);
	}
};

template <typename Der>
bool operator==(const Equality<Der>& left, const Equality<Der>& right)
{
	return !(left.derived() < right.derived()) && !(right.derived() < left.derived());
}

template <typename Der>
bool operator!=(const Equality<Der>& left, const Equality<Der>& right)
{
	return !(left == right);
}

class Nec : public Equality<Nec> {
public:
	Nec(int val = 0) : m_val{ val } {}
	bool operator<(const Nec& other)const
	{
		return m_val < other.m_val;
	}
private:
	int m_val;
};

class Person : public Equality<Person>
{
public:
	Person(std::string name) : m_name{ std::move(name) } {}
	bool operator<(const Person& other)const
	{
		return m_name < other.m_name;
	}
private:
	std::string m_name;
};

int main()
{
	Nec x{ 198 }, y{ 234 };

	std::cout << std::boolalpha;

	std::cout << "x == y = " << (x == y) << "\n";
	std::cout << "x != y = " << (x != y) << "\n";

	Person p1{ "Akif" }, p2{ "Akif" };

	std::cout << "p1 == p2 : " << (p1 == p2) << "\n";
	std::cout << "p1 != p2 : " << (p1 != p2) << "\n";
}

