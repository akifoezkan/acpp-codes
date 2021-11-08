#### fold ifadelerini kullanarak aşağıdaki fonksiyon şablonlarını oluşturun.

```
#include <iostream>

void print(int x)
{
    std::cout << x << ' ';
}

template <typename ...Ts>
void call(Ts ...args)
{
     ///gelen tüm argümanlar ile (gönderildikleri sırayla) print işlevi bir kez çağrılacak
}

template <typename ...Ts>
void reverse_call(Ts ...args)
{
     ///gelen tüm argümanlar ile (gönderildikleri sırayla ters) print işlevi bir kez çağrılacak
}


int main()
{
     call(1, 2, 3, 4, 5);  //1 2 3 4 5
     reverse_call(1, 2, 3, 4, 5);  //5 4 3 2 1
}
```



