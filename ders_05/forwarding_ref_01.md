Her iki fonksiyona da istediğimiz herhangi değer kategorisinde _(value category)_, _const_ olan ya da olmayan ifadeler ile çağrı yapabiliriz. Üsttekine yapılan çağrıda _value category_ ve _const_'luk korunmaz iken alttakine yapılan çağrıda korunur.

```
template <typename T>
void func(const T&);

template <typename T>
void foo(T&&);
```
