#include <stdio.h>
/**
 * main - Entry point
 * Description - Program that prints the alphabet in lowercase
 * Return: 0 Always
 */
int main(void)
{
	int x = 97;

		while (x <= 122)
		{
			putchar(x);
			x++;
		}
		putchar ('\n');
		return (0);
}
