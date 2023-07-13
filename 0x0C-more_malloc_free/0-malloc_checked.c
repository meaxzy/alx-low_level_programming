#include <stdlib.h>
# include "main.h"
/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: Number of memory in bytes
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)

	int *ptr;
	ptr = malloc(b);

	if (malloc == NULL)
	{
		exit (98);
	}
	else
		return (ptr);
}
