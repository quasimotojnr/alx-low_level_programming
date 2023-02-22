#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - Prints last digit of arguments
 * @n: Single integer argument
 *
 * Return: Last digit of argument
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	printf("%d", abs(a));
	return (abs(a));
}
