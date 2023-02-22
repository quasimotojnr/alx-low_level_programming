#include <stdio.h>
#include <ctype.h>

/**
 * print_sign - Checks for the sign of argument
 * @n: Single intiger argument
 *
 * Return: 1 if true 0 if false
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar("+");
		return (1);
	}
		else if (n == 0)
	{
		putchar("0");
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}
}
