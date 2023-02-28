#include <stdio.h>

/**
 * reset_to_98 - Resets argument to 98
 * @n: Single argument
 *
 * Return: Nothing
 */
void reset_to_98(int *n)
{
	int *p;

	p = &n;
	*p = 98;
}
