#include <stdio.h>
/**
 * main - Entry point
 * Description - A program that prints all possible combinations
 * Return: 0 Always
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
