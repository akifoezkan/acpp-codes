//value category of throw exprewssion is prvalue

#include <type_traits>

constexpr auto b = !std::is_reference_v<decltype(throw 5)>;
