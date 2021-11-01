#include <cstdlib>

template <typename T>
void func(T*);

int foo(int);

int main()
{
    int* p = nullptr;
    int** ptr{ &p };

    func(*p);       // error, T* cannot bind to int
    func(p);        // func<int>(int*)
    func(*ptr);     // func<int>(int*)
    func(**ptr);    // error, T* cannot bind to int
    func(ptr);      // func<int*>(int**)
    func(&ptr);     // func<int**>(int***)
    func(foo);      // func<int(int)>(int(*)(int))
    func(&foo);     // func<int(int)>(int(*)(int))
    func("alican"); // func<const char>(const char*)
    func(nullptr);  // error:
                    // candidate template ignored: could not match 'T *' against 'nullptr_t'
    func(std::malloc(16));  //func<void>(void*)
}
