#include <stdio.h>
/**
 * main - Entry point
 * Description - Prints the alphabet in lowercase, and then in uppercase.
 * Return: Always 0
 */
int main(void)
{
	int x = 97;
	int y = 65;

	while (x <= 122)
	{
		putchar(x);
	}
	while (y <= 90)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
