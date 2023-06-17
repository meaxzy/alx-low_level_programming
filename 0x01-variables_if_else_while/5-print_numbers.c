#include <stdio.h>
/**
 * main - Entry point
 * Description - Prints all single digit numbers of base 10 starting from 0
 * Return: 0 Always
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d",n);
		n++;
	}
	printf('\n');
	return (0);
}
