Aşağıdaki kodda tanımsız bir davranış _(undefined behavior)_ söz konusu mu?

```
#include <string>
#include <iostream>

int main()
{
	using namespace std;

	const string& s1 = string{ "necati " };
	string &&s2 = string{ "ergin" };

	string&& s3 = s1 + s2;
	
	s3 += "can";

	std::cout << "s1 = " << s1 << "\n";
	std::cout << "s2 = " << s2 << "\n";
	std::cout << "s3 = " << s3 << "\n";
}
```
