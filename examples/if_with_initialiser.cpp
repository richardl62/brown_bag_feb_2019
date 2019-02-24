// C++17
// initialize the condition we want to check from within the if statement
#if 0
if (init; condition)


if (auto ret = map.insert({ "hello", 3 }); !ret.second)
std::cout << "hello already exists with value " << ret.first->second << "\n";
#endif