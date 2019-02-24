#include <iostream>


void lambda_capture()
{
	double x = 4;
	auto sqrt_x = [x = sqrt(x)]{ return x; };

	std::cout << sqrt_x() << std::endl; // 2

	x = 9;
	std::cout << sqrt_x() << std::endl; // still 2

	auto sqrt_x_v2 = [val = sqrt(x)]{ return val; }; 
	std::cout << sqrt_x_v2() << std::endl; // returns 3

	// Gets scary with std::move
}