#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: times the character printed
 * Return: a value
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
