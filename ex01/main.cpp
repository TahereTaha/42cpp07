#include <iostream>
#include <ctime>
#include <cstdlib>
#include "iter.hpp"

void	set_rand_value(int &num)
{
	num = std::rand() % 100;
}

void	double_value(int &num)
{
	num = num * 2;
}

void	print_value(const int &num)
{
	std::cout << "the num is: " << num << std::endl;
}

int main(void)
{
	int	num_arr[42];
	std::srand(std::time(NULL));

	iter(num_arr, 42, set_rand_value);
	std::cout << "\thint:" << std::endl;
	iter(num_arr, 42, print_value);
	iter(num_arr, 42, double_value);
	
	const int *new_num_arr = num_arr;

	std::cout << "\thint:" << std::endl;
	iter(new_num_arr, 42, print_value);
//	iter(new_num_arr, 42, double_value);
	
	return (0);
}
