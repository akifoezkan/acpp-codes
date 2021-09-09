Aşağıda tanımlanmış olan _Student_ isimli sınıfın özel üye fonksiyonlarını derleyici nasıl tanımlanıyor ise siz de aynı şekilde tanımlayın:

```
#include <vector>
#include <string>

class Person {
	//...
};

class Student : public Person {
public:
    //special member function definitions
private:
	std::string m_name;
	std::vector<int> m_grades;
};
``` 
