#include "stdafx.h"
#include <string>

auto identity = [](auto x) { return x; };

int three = identity(3); // == 3
std::string foo = identity("foo"); // == "foo"