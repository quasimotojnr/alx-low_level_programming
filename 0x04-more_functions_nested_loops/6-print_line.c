#include <stdio.h>

/**
 * print_line - Prints _ n number of times
 * @n: Single integer argument
 *
 * Return: Void
 */
void print_line(int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		putchar('_');
		count++;
	}
	putchar('\n');

}

