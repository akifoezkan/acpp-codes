template <typename T, typename U>
void func(T, U);

int main()
{
	void (*fp)(int, double) = &func;
}
