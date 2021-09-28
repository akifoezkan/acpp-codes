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
	func(return_const_lref("tmp"));		// calls func(const std::string&)
	func(return_lref(str));				// calls func(std::string&)
	func(return_rref("tmp"));			// calls func(std::string&&)
	func(return_rref(std::move(str))); // calls func(std::string&&)
	func(return_value("tmp"));			// calls func(std::string&&)
}
