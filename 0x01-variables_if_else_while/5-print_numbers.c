#include <stdio.h>
/**
 * main - Entry point
 * Description - Prints all single digit numbers of base 10 starting from 0
 * Return: 0 Always
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
