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
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0'; j++)

	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	l = j;
	for (j = 0; j <= l; k++, j++)
		p[k] = s2[j];
	return (p);
}
