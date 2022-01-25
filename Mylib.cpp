
#include <iostream>


namespace Mylib
{
	void initDbArray(double arr[], size_t SIZE)
	{
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = rand() % 100 - 50;
		}
	}

	void printDbArray(const double arr[], size_t SIZE)
	{
		for (int i = 0; i < SIZE; i++)
		{
			std::cout << arr[i] << " ";
			if (i == (SIZE - 1) / 2)
				std::cout << std::endl;
		}
	}

	void countDbArray(const double arr[], size_t SIZE)
	{
		int countOver = 0, countLower = 0;

		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] > 0)
				countOver++;
			if (arr[i] < 0)
				countLower++;
		}
		std::cout << "There are " << countOver << " digits bigger than zero" << std::endl;
		std::cout << "There are " << countLower << " digits smaller than zero" << std::endl;
	}
}









