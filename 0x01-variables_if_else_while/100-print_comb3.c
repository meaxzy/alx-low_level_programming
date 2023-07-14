#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 *
 * Return: 0 Always
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
		for (j = '0'; j <= '9'; j++)
		{
			_putchar(i);
			_putchar(j);
		}
			if (i != '8' || (i == '8' && j != '9'))
			{
				_putchar(' ');
				_putchar(',');
			}
			_putchar('\n');
}

