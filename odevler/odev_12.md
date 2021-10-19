#### Aşağıdaki kodda, _sv_ isimli std::string_view nesnesinin gözlem aralığının, yazının başındaki ve sonundaki boşluk karakterlerinin _(space ve horizontal tab)_ olmayacağı şekilde daraltılması gerekmektedir. Bunu gerçekleştirmek için  _remove_prefi_x ve _remove_suffix_ çağrılarında fonksiyonlara hangi argümanlar gönderilmelidir?

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
