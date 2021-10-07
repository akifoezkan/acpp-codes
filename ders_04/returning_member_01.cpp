#include <string>
#include <iostream>

struct Person {
	//...
	const std::string& get_name()const& 
	{
		return m_name;
	}

	std::string get_name()&&
	{
		return std::move(m_name);
	}


	std::string m_name{ "necati ergin" };
};


Person create_person()
{
	Person p;
	///

	return p;
}

int main()
{
	for (auto c : create_person().get_name())
		std::cout.put(c);
}
