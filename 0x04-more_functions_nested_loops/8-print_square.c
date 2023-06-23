#include "main.h"
/**
 * print_square -  function that prints a square
 * @size: size is the size of the square
 * Return: size is 0 or less
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
