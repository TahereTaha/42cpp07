#pragma once

#include <cstddef>

template <typename T>
void	iter(T *arr, const size_t len, void (*func)(T &))
{
	if (!arr || !func)
		return ;
	size_t	i = 0;
	while (i < len)
	{
		func(arr[i]);
		i++;
	}
}

template <typename T>
void	iter(T *arr, const size_t len, void (*func)(const T &))
{
	if (!arr || !func)
		return ;
	size_t	i = 0;
	while (i < len)
	{
		func(arr[i]);
		i++;
	}
}
