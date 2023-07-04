#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: entire string
 * @needle: substring
 * Return: a pointer or 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j = '\0')
		{
			return (haystack);
		}
		
		return (0);
	}
}
