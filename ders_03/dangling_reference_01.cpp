#include <iostream>

struct Person {
	//...
	const std::string& get_name()const
	{
		return m_name;
	}

	std::string m_name{ "ali kalan" };
};

Person create_person()
{
	Person per;

	return per;
}

int main()
{
	for (char c : create_person().get_name()) {  //ub
		std::cout.put(c);
	}
}
