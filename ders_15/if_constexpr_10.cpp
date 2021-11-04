auto foo()
{
	if constexpr (sizeof(int) > 2) {
		return 42;
	}
	return 42u; //error if sizeof(int) > 2 - different return types
}
