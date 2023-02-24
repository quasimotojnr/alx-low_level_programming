#include <stdio.h>

/**
 * print_square - Prints square shape of lenght n
 * @size: Single integer argument indicating desired lenght
 *
 * Return: void
 */
void print_square(int size)
{
	int count;
	int hash;
	int hashCount;

	hash = size;
	hashCount = 0;
	count = 0;

	while (count < size)
	{
		hashCount = 0;
		while (hashCount < hash)
		{
			putchar('#');
			hashCount++;
		}

		putchar('\n');
		count++;
	}
}
