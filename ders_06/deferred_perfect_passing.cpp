#include <iostream>
#include <string>

void func(const std::string&) 
{
	std::cout << "func(const std::string&)\n";
}

void func(std::string&) 
{
	std::cout << "func(std::string&)\n";
}

void func(std::string&&) 
{
	std::cout << "func(std::string&&)\n";
}

const std::string& return_const_lref (const std::string& str) 
{
	return str;
}

std::string& return_lref(std::string& str) 
{
	return str;
}

std::string&& return_rref(std::string&& str) 
{
	return std::move(str);
}

std::string return_value(const std::string& str) 
{
	return str;
}

int main()
{
	std::string str{ "lvalue" };
	auto&& ref = return_const_lref("tmp");		
	//auto&& ref = return_lref(str);				
	//auto&& ref = return_rref("tmp");			
	//auto&& ref = return_rref(std::move(str));   
	//auto&& ref = return_value("tmp");			

	func(std::forward<decltype(ref)>(ref));
}
