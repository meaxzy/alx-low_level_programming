#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a ptr to newly allocated space in memory
 * @str: cha
 * Return: 0
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0, j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		p[j] = str[j];
	return (p);
}
