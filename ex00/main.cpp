#include <iostream>
#include "whatever.hpp"

int main(void)
{
	int	x = 2;
	int	y = 4;

	std::cout << "the values before swap are: " << x << ", " << y << std::endl;
	
	swap(x, y);
	
	std::cout << "the values after swap are: " << x << ", " << y << std::endl;

	return (0);
}
