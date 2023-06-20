#include "main.h"
/**
 * print_alphabet - Entry point
 * Description - A function that prints the alphabet, in lowercase
 * Return: 0 Always
 */
void print_alphabet(void)
{
	int n = 97;

	while (n <= 112)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
