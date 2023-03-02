#include <stdio.h>
#include <string.h>

/**
 * reverse_array - Reverses an intiger array
 * @a: Integer array to be reversed
 * @n: Lenght of array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int length;
	int index;
	int initNum;
	int midpoint;
	char oppNum;

	length = n;
	midpoint = length / 2;
	index = 0;
	while (index < midpoint)
	{
		oppNum = a[length - index - 1];
		initNum = a[index];
		a[index] = oppNum;
		a[length - index - 1] = initNum;
		index++;
	}
}
