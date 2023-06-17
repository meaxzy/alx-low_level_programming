#include <stdio.h>
/**
 * main - Entry point
 * Description - Print all the letters except q and e
 * Return: 0 Always
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 111)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
