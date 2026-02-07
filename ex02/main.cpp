#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int>	arr;
	Array<int>	arr2 = Array<int>(arr);
	Array<int>	arr3;
	arr3 = arr;
	return (0);
}
