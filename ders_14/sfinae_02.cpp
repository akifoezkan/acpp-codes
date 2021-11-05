#include <type_traits>
#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>
#include <list>


template <typename Iter>
using IfRandomAccessIter = std::enable_if_t <std::is_same_v<std::random_access_iterator_tag, typename std::iterator_traits<Iter>::iterator_category>>;

template <typename Iter>
using IfBidirIter = std::enable_if_t <std::is_same_v<std::bidirectional_iterator_tag, typename std::iterator_traits<Iter>::iterator_category>>;


template <typename Iter>
void Advance(Iter, int, IfRandomAccessIter<Iter>* = nullptr)
{
	std::cout << "random access iterator\n";
}

template <typename Iter>
void Advance(Iter, int, IfBidirIter<Iter>* = nullptr)
{
	std::cout << "bidirectional iterator\n";
}

int main()
{
	using namespace std;

	vector<int> ivec(10);
	auto vec_iter = ivec.begin();
	Advance(vec_iter, 5);

	list<int> ilist(10);
	auto list_iter = ilist.begin();
	Advance(list_iter, 5);
}
