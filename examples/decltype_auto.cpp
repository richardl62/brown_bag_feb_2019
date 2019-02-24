#include <vector>




template<typename T>
decltype(auto) get_element(T &array, size_t index)
{
	return array[index];
};

void decltype_auto()
{
	const int x = 0;
	auto x1 = x; // int
	decltype(auto) x2 = x; // const int

	int y = 0;
	int& y1 = y;
	auto y2 = y1; // int
	decltype(auto) y3 = y1; // int&

	std::vector<int> vec(2);
	get_element(vec, 0) = 4;
}

	