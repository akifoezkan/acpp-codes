// Aşağıdaki kodda //1 //2 //3 olarak işaretlenmiş deyimlerden hangileri
// tanımsız davranış oluşturur?

#include <iostream>
#include <string_view>
#include <iterator>

int main()
{
	char s[]{ 'n', 'e', 'c', 'o' };

	std::string_view sv{ s, std::size(s)};

	std::cout << s << "\n";         // 1, ub, nonterminating print
	std::cout << sv << "\n";        // 2, ok, output: neco
	std::cout << sv.data() << "\n"; // 3, ub, nonterminating print
}
