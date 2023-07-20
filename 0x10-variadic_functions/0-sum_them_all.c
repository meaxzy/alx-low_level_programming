#include "variadic_functions.h"

/**
 * sum_them_all - sum all paramaters of function
 * @n: number of arguments to sum
 *
 * Return: sum of all characters provided
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list ptr_n;

	va_start(ptr_n, n);
	
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(ptr_n, const unsigned int);
		}
	}
	va_end(ptr_n);
	return (sum);
}
