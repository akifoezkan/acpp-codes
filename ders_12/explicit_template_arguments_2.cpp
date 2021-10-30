#include <memory>

template <typename T, typename ...Args>
std::unique_ptr<T> MakeUnique(Args && ...args)
{
	return std::unique_ptr<T>{new T(std::forward <Args>(args)...)};
}


int main()
{
	auto upx = std::make_unique<int>(23);
	auto upy = MakeUnique<int>(23);
}
