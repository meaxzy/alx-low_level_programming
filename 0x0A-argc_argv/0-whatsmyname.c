#include <stdio.h>
/**
 * main - prints its name
 * @argc: number of command line args
 * @argv: arrays of command line
 *
 * Return: 0 Always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
