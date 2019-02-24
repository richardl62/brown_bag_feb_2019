#include "stdafx.h"
#include <iostream>
#include <string>

auto hello1()
{
	return "hello";
}

auto hello2()
{
	return std::string("hello");
}

auto hello(std::string &word)
{
	word = "hello";
}

auto hello(bool french)
{
	if(french)
		return "bonjour";
	else
		return "hello";
}

#if 0
auto hello_BAD(bool use_string)
{
	if (use_string)
		return std::string("hello");
	else
		return "hello";
}
#endif 0

constexpr bool use_string = true;
auto hello()
{
	if constexpr (use_string)
		return std::string("hello");
	else
		return "hello";
}