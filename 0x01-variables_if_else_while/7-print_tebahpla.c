#include <stdio.h>
/**
 * main - Entry point
 * Description - A program that prints the lowercase alphabet in reverse
 * Return: 0 Always
 */
int main(void)
{
	int i = 122;

	while (i <= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
