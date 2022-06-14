#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, f, g;

	for (i = '0'; i < '9'; i++)
	{
		for (f = i + 1; f <= '9'; f++)
		{
			for (g = f + 1; g <= '9'; g++)
			{
				if ((i != f) != g)
				{
				      putchar(i);
				      putchar(f);
				      putchar(g);

					if (i == '7' && f == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
