
constexpr int factorial(int n) {
	int fact = 1;
	for (int i = 2; i < n; ++i)
		fact *= n;

	return fact;
}

constexpr int factorial_v2(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * factorial_v2(n - 1);
	}
}