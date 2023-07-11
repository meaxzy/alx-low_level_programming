#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat -  a function that concatenates two strings
 * @s1: copy to
 * @s2: copy from
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	for (k = 0; k < i; k++)
	{
		if (*s1)
			p[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		if (*s2)
			*(p + k + l) = s2[l];
	}
	return (p);
}
