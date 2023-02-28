#include <stdio.h>

/**
 * swap_int - Swaps the values of two variables using pointers
 * @a: First argument to be swapped
 * @b: Second argument to be swapped
 *
 * Return: 1 if true 0 if false
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
