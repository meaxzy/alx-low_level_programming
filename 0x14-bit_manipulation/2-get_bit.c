#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: ineger to get bit from.
 * @index: position to retrieve the bit from.
 *
 * Return: the value of the bit at index index
 *          -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
