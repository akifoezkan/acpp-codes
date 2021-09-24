Aşağıdaki kodda yorum satırı olan yere bir _lambda ifadesi_ yazmanız isteniyor. Lambda ifadesinin altında, **f** isimli fonksiyon nesnesi ile yapılan çağrıların her biri, gönderilen argümanların değerlerini, aralarında virgül karakteri olacak şekilde tek bir satıra yazdırmalı:

**ekran çıktısı:** <br>
10</br>
10, necati ergin</br>
10, necati ergin, </br>
10, necati ergin, 0000000011111</br>
10, necati ergin, 0000000011111, 3.4 7.8</br>

```
#include <string>
#include <bitset>

template<typename ...Args>
void print(Args && ...args);

int main()
{
	int x = 10;
	std::string name{ "necati ergin" };
	std::bitset<16> bs {255u};
	std::pair dp{ 3.4, 7.8 };

	//auto f = 

	f(x);
	f(x, name);
	f(x, name, bs);
	f(x, name, bs, dp);
}
```
