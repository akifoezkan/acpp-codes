include <type_traits>
#include <vector>


int main()
{
    auto f = [](auto& x) {
        using type = std::decay_t<decltype(x)>;
        using value_type = typename type::value_type;
        //..
    };

    std::vector<int> ivec;

    f(ivec);

}
