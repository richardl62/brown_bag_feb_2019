template<class T>
constexpr T pi = T(3.1415926535897932385);

auto d = pi<double>;

auto f = pi<float>;

template<> constexpr int pi<int> = 4; // If you are feeling perverse

auto i = pi<int>;

