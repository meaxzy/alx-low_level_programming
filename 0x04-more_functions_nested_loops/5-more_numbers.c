#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
