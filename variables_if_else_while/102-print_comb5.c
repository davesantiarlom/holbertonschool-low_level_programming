#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int i, f;

	for (i = 0; i <= 98; i++)
	{
		for (f = i + 1; f <= 99; f++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((f / 10) + '0');
			putchar((f % 10) + '0');

			if (i == 98 && f == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
