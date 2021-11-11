Aşağıdaki kodda tanımsız davranış _(undefined behavior)_ var mı?

```
#include <string>
#include <iostream>

class Book {
public:
	Book(std::string title, std::string author) : 
	m_title{ std::move(title) }, m_author{ std::move(author) } {}
	const std::string &get_title()const { return m_title; }
	const std::string &get_author()const { return m_author; }
private:
	std::string m_title;
	std::string m_author;
};

Book create_book(std::string name, std::string title)
{
	return Book{ std::move(name), std::move(title)};
}

int main()
{
	for (auto c : create_book("hunger", "knut hamsun").get_title()) {
		std::cout.put(c);
	}
}
```
