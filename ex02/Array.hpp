#pragma once

# include <string>
# include <iostream>

template <typename T>
class Array
{
	private:
		T				*_data;
		unsigned int	_size;

	public:
		Array(void)
		{
			std::cout << "Array default constructor." << std::endl;
			this->_size = 0;
			this->_data = NULL;
		}
		Array(const Array<T> & src)
		{
			std::cout << "Array copy constructor." << std::endl;
			this->_size = 0;
			this->_data = NULL;
			*this = src;
		}
		~Array(void)
		{
			std::cout << "Array destructor." << std::endl;
			delete[] this->_data;
		}
		Array & operator = (const Array & src)
		{
			std::cout << "Array copy assigment." << std::endl;
			if (this != &src)
			{
				delete[] this->_data;
				this->_size = src._size;
				this->_data = new T[this->_size];
				unsigned int	i = 0;
				while (i < this->_size)
				{
					this->_data[i] = src._data[i];
					i++;
				}
			}
			return (*this);
		}
		
		Array(unsigned int n)
		{
			std::cout << "Array custom constructor." << std::cout;
			this->_size = n;
			this->_data = new T[this->_size];
			size_t	i = 0;
			while (i < this->_size)
			{
				this->_data[i] = T();
				i++;
			}
		}
};
