#include <stdio.h>
/**
 * main - print the number of args passed
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
