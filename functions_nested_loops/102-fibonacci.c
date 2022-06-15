#include <stdio.h>

/**
 * main - Fibonacci
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int f[50];

	f[0] = 1;
	f[1] = 2;
	printf("%ld, %ld, ", f[0], f[1]);

	for (i = 2; i < 50; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		if (i == 49)
			printf("%ld\n", f[i]);
		else
			printf("%ld, ", f[i]);
	}

	return (0);
}
