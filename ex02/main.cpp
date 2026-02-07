#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int>	arr;
	Array<int>	arr2 = Array<int>(arr);
	Array<int>	arr3;
	arr3 = arr;
	Array<int>	arr4(6);
	return (0);
}
