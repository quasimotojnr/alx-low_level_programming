#include <stdio.h>

/**
 * print_numbers - Fuction for printing numbers 0 to 9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int num = 48;
	int ascii = 0;

	while (ascii < 10)
	{
		_putchar(num);
		num++;
		ascii++;
	}
	_putchar('\n');
}

