#include "main.h"
/**
 * _isalpha - Entry point
 * @c: The ASCII code
 * Description - A  function that checks for alphabetic character
 * Return: 1 when letter, 0 when not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
