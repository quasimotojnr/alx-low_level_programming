#include <stdio.h>

/**
 * print_triangle - Prints a triangle of size 'size' to the terminal
 * @size: Single integer argument indicating desired size
 *
 * Return: void
 */
void print_triangle(int size)
{
	int count;
	int space;
	int spaceCount;
	int hash;
	int hashCount;

	hashCount = 0;
	space = size - 1;
	spaceCount = 0;
	count = 0;

	while (count < size)
	{
		hash = count + 1;
		while (spaceCount < space)
		{
			spaceCount++;
			putchar(' ');
		}
		while (hashCount < hash)
		{
			putchar('#');
			hashCount++;
		}
		putchar('\n');
		hashCount = 0;
		spaceCount = 0;
		count++;
		space--;
	}
}
