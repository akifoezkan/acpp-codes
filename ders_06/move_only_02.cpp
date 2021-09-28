#include <vector>
#include <string>
#include <memory>
#include <iostream>

using usptr = std::unique_ptr<std::string>;

int main()
{
	std::vector<usptr> vec(5);

	for (const auto& rup : vec)
		std::cout << (rup ? "not empty" : "empty") << '\n';
}
