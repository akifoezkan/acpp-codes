template <typename T>
struct RemoveReference {
	using type = T;
};

template <typename T>
struct RemoveReference<T&>
{
	using type = T;
};

template <typename T>
struct RemoveReference<T&&>
{
	using type = T;
};


template <typename T>
using RemoveReference_t = typename RemoveReference<T>::type;
