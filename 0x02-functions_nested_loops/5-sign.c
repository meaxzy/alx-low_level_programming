#include "main.h"
/**
 * print_sign - Entry point
 * @n: The ASCII code
 * Description - A  function that prints the sign of a number
 * return: 1 greater than n, 0 when 0 and -1 when less than 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
