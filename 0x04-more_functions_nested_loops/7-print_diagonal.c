#include <stdio.h>

/**
 * print_diagonal - Prints diagonal on terminal of lenght n
 * @n: Single integer argument indicating desired size
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int count;
	int space;
	int spaceCount;

	space = 0;
	spaceCount = 0;
	count = 0;

	while (count < n)
	{
		while (spaceCount < space)
		{
			putchar(' ');
			spaceCount++;
		}
		putchar(92);
		putchar('\n');
		spaceCount = 0;
		count++;
		space++;
	}

}

