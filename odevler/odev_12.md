### Aşağıdaki kodda, sv std::string_view nesnesinin gözlem aralığının, yazının başındaki ve sonundaki boşluk karakterlerin (space ve horizontal tab) olmayacağı şekilde daraltılması gerekmektedir. Bunu gerçekleştirmek için  remove_prefix ve remove_suffix çağrılarında fonksiyonlara hangü argümanlar gönderilmelidir?

```
#include <iostream>
#include <string_view>
#include <string>

int main()
{
	std::string str;

	std::cout << "bir yazi girin: ";
	getline(std::cin, str);  
	std::string_view sv{ str };

	std::cout << "|" << sv << "|";  // |    necati ergin     |

	sv.remove_suffix(????);
	sv.remove_prefix(????);

	std::cout << "|" << sv << "|"; // |necati ergin|
}
```
