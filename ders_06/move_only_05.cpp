#include <vector>
#include <string>
#include <memory>

using usptr = std::unique_ptr<std::string>;

int main()
{
	std::vector<usptr> vec(5);

	//for (auto rup : vec) //gecersiz
	//	;

	for (auto &rup : vec) //gecerli
		;

	for (const auto& rup : vec) //gecerli
		;

	for (auto&& rup : vec) //gecerli
		;
}

