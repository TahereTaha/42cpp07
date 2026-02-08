#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int>	arr;
	Array<int>	arr2 = Array<int>(arr);
	Array<int>	arr3;
	arr3 = arr;
	Array<int>	arr4(6);

	int	i = 0;
	while ((size_t)i < arr4.size())
	{
		arr4[i] = i + 1;
		i++;
	}
	i = 0;
	while ((size_t)i < arr4.size())
	{
		std::cout << "val at index: " << arr4[i] << std::endl;
		i++;
	}
	
	std::cout << "testing values out of range." << std::endl;
	i = -5;
	while (i < 12)
	{
		std::cout << "at index " << i << " returns ";
		try 
		{
			int	val = arr4[i];
			std::cout << "value of " << val << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "exception of: " << e.what() << std::endl;
		}
		i++;
	}
	
	return (0);
}
