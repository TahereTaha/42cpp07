#include <iostream>
#include "whatever.hpp"

int main(void)
{
	//	testing the swap.
	{
		int	x = 2;
		int	y = 4;
	
		std::cout << "the values before swap are: " << x << ", " << y << std::endl;
		
		swap(x, y);
		
		std::cout << "the values after swap are: " << x << ", " << y << std::endl;
	}
	//	testing the min and max.
	{
		int	num1 = 56;
		int	num2 = 78;

		std::string str1 = "hola mundo";
		std::string str2 = "hole mundo";

		std::cout << "the smallest in int is: " << min(num1, num2) << std::endl;
		std::cout << "the smallest in str is: " << min(str1, str2) << std::endl;
		std::cout << "the bigest in int is: " << max(num1, num2) << std::endl;
		std::cout << "the bigest in str is: " << max(str1, str2) << std::endl;
	}
	return (0);
}
