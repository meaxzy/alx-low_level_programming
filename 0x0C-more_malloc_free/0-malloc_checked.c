#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: Number of memory in bytes
 *
 * Return: 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit (98);
	}
	else
		return (ptr);
}
