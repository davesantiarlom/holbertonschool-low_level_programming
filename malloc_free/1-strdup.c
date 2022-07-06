#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - A function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a
* parameter.
* @str: An input pointer of the string to copy.
* Return: Apointer to new string or NULL if it str is NULL
*/

char *_strdup(char *str)
{
	char *s;
	int i, size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	s = malloc((sizeof(char) * size) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
