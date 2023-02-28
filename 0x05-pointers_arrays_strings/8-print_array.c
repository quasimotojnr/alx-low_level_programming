#include <stdio.h>
#include <string.h>

/**
 * print_array - Prints all n values of a given integer array
 * @a: Intger array argument
 * @n: Number of array values to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int length;
	int index;

	length = n;
	index = 0;

	while (index < length)
	{
		printf("%d", (a[index]));
		if (index < length - 1)
		{
			printf(", ");
		}
		index++;
	}
	putchar(10);
}
