#include "main.h"

/**
*_strlen - A function to obtain the length of the string s
* @s: A string to calculate length
* Return: the length of string s
*/

int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen(s + 1) + 1);
}

/**
* recursion - recursion function that checks for matching characters
* @s: Variable holding pointer placement from the beginning
* @b: Variable holding pointer placement from the end
* Return: 1 if palindrome, 0 otherwise
*/

int recursion(char *s, char *b)
{
	if (s > b)
		return (1);
	if (*s != *b)
		return (0);

	return (recursion(s + 1, b - 1));
}

/**
* is_palindrome - A function that checks if s is a palindrome string
* @s: An inpuit string
* Return: 1 if is string is a palindrome or 0 in otherwise
*/

int is_palindrome(char *s)
{
	int pal;

	pal = _strlen(s);
	if (pal <= 1)
		return (1);
	return (recursion(s, s + pal - 1));
}
