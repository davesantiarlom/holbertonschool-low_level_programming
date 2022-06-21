#include "main.h"

/**
 * rev_string - a function that reverse a string
 * @s: an input string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char c;

	while (s[l] != '\0')
		l++;

	while (i < l--)
	{
		c = s[i];
		s[i++] = s[l];
		s[l] = c;
	}
}
