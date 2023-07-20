#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array to be looped through
 * @size: size of an array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
