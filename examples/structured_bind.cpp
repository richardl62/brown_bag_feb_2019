#include <iostream>
#include <string>
#include <set>

// C++17
struct S
{
	int i = 1;
	double d = 0.1;
	std::string s = "hello";
};

void  structured_bind()
{
	std::set<int> lst;
	auto[it, inserted] = lst.insert(123);

	it;
	inserted;

	S s;
	
	auto[i, d, str] = s;
	std::cout << i << " " << d << " " << str << std::endl;

	{
		auto &[i, d, str] = s;

		i = 1;
		d = 0.1;
		str = "hello";
	}
}