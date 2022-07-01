#include "main.h"

/**
 * sqrt_loop - Finds natural square root, if it exists
 * @b: Variable holding potential natural square root
 * @a: Variable of original inputted value
 * Return: The natural square root, or -1 if one does not exist
 */

int sqrt_loop(int a, int b)
{
	if (b == a * a)
		return (b / a);
	else if (b < a * a)
		return (-1);

	return (sqrt_loop(a + 1, b));
}

/**
 * _sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_loop(1, n));
}
