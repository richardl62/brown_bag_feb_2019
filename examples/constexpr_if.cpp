#include <iostream>

template <typename T>
auto get_value(T t) {
	if constexpr (std::is_pointer_v<T>)
		return *t;
	else
		return t;
}


void constexpr_if()
	{
	int i=1;
	int *ip = &i;

	std::cout << get_value(ip) << std::endl;
	}
