
template <typename T>
struct Data {
	T x;
};

template <typename T>
Data(T)->Data<T>;

int main()
{
	Data d1 = { 10 }; //error in C++17 if there is no deduction guide
	
}
