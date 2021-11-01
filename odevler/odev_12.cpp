// Aşağıdaki kodda, _sv_ isimli _std::string_view_ nesnesinin gözlem
// aralığının, yazının başındaki ve sonundaki boşluk karakterlerinin
// _(space ve horizontal tab)_ olmayacağı şekilde daraltılması gerekmektedir.
// Bunu gerçekleştirmek için  _remove_prefi_x ve _remove_suffix_ çağrılarında
// fonksiyonlara hangi argümanlar gönderilmelidir?

#include <iostream>
#include <iomanip>
#include <string_view>
#include <string>



int main()
{
    for(const auto& test : {"word", "",
                            " first", "\t\tfirst", " \t first",
                            "last ", "last\t\t", "last \t ",
                            " mix ", "\tmix\t\t", " \t mix \t "})
    {
        std::string_view sv{test};
        std::cout << "|" << sv << "|\n\t=>";

        // remove spaces before the prefix address
        sv.remove_prefix(std::min(sv.find_first_not_of(" \t"), sv.size()));

        // remove spaces after the suffix address
        if(const auto idx_last_nempty = sv.find_last_not_of(" \t") + 1; idx_last_nempty < sv.size())
        {
            //std::cout << "idx = " << idx_last_nempty << "\n\t";
            sv.remove_suffix(sv.size() - idx_last_nempty);
        }

        std::cout << "|" << sv << "|\n";
        std::cout << std::string(24, '=') << "\n";
    }

    // homework
    std::string str;
    std::cout << "bir yazi girin: ";
    getline(std::cin, str);
    std::string_view sv{ str };

    std::cout << "|" << sv << "|\n";  // |    necati ergin     |

    sv.remove_prefix(std::min(sv.find_first_not_of(" \t"), sv.size()));
    if(const auto idx_last_nempty = sv.find_last_not_of(" \t") + 1; idx_last_nempty < sv.size())
        sv.remove_suffix(sv.size() - idx_last_nempty);

    std::cout << "|" << sv << "|\n"; // |necati ergin|
}
