#include <iostream>
#include <iterator>

template <typename Der>
class Container {
public:
	decltype(auto) front()
	{
		return *derived().begin();
	}

	decltype(auto) back()
	{
		return *std::prev(derived().end());
	}

	decltype(auto) size() const
	{
		return (size_t)(std::distance(derived().begin(), derived().end()));
	}

	decltype(auto) operator[](std::size_t idx)
	{
		return *std::next(derived().begin(), idx);
	}

private:
    // Const overloading
	Der& derived() { return static_cast<Der&>(*this); }
	const Der& derived()const { return static_cast<const Der&>(*this); }
};

template <typename T>
class Darray : public Container<Darray<T>> {
public:
	Darray(std::size_t n) : m_size{ n }, m_uptr{ std::make_unique<T[]>(n) } {}
	T* begin()
	{
		return m_uptr.get();
	}
	const T* begin() const
	{
		return m_uptr.get();
	}

	T* end()
	{
		return m_uptr.get() + m_size;
	}
	const T* end() const
	{
		return m_uptr.get() + m_size;
	}

private:
	std::size_t m_size;
	std::unique_ptr<T[]> m_uptr;
};


int main()
{
	Darray<int> a{ 10 };

	for (size_t i{}; i < a.size(); ++i) {
		a[i] = i;
	}

	std::cout << a.front() << "\n";
	std::cout << a.back() << "\n";
}

