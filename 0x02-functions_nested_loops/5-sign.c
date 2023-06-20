#include "main.h"
/**
 * print_sign- Determine if the input number
 * greater than, equal or less than zero
 * @n: The ASCII code
 * Description - A  function that prints the sign of a number
 * Return: 1 greater than zero, 0 is zero,
 * -1 less than zero
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
