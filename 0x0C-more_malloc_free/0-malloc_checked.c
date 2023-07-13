#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: Number of memory in bytes
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (malloc == NULL)
	{
		exit (98);
	}
	else
		return (ptr);
}
