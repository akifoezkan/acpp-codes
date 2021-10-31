// for the implicit copy operations
//      sv  -> str is NOT ok
//          string str(sv);     // ok, explicit ctor
//          string str = sv;    // error
//      str -> sv is ok

#include <string_view>
#include <string>
#include <iostream>

std::string func(std::string_view sv)
{
#ifdef SHOW_SYNTAX_ERROR
	return sv; //gecersiz
#else
	//return std::string{ sv }; //gecerli
	return sv.data(); //gecerli
#endif
}

void foo(std::string) {};

int main()
{
	std::string_view sv("necati ergin");

#ifdef SHOW_SYNTAX_ERROR
	std::string str = sv;   // gecersiz (explicit ctor)
#endif
	std::string str{ sv };  // gecerli

	std::string s = sv.data(); // gecerli

#ifdef SHOW_SYNTAX_ERROR
	foo(sv);                // gecersiz, same reason
                            // sview cannot be copied to a string
#endif
	foo(std::string{ sv }); // gecerli

	foo(sv.data());         // gecerli
}
