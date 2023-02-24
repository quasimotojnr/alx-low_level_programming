#include <stdio.h>

/**
 * print_number - Prints any integer number higher than -10000 and
 * less than 10000
 * @n: Integer argument to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int a, b, c, d, num;

	if (n < 0)
	{
		putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num >= 1000 && num < 10000)
	{
		a = num / 1000;
		b = (num / 100) % 10;
		c = (num / 10) % 10;
		d = num % 10;
		putchar(a + '0');
		putchar(b + '0');
		putchar(c + '0');
		putchar(d + '0');
	}
	else if (num >= 100 && num < 1000)
	{
		a = num / 100;
		b = (num / 10) % 10;
		c = num % 10;
		putchar(a + '0');
		putchar(b + '0');
		putchar(c + '0');
	}
	else if (num >= 10 && num < 100)
	{
		a = num / 10;
		b = num % 10;
		putchar(a + '0');
		putchar(b + '0');
	}
	else
	{
		putchar(num + '0');
	}
	putchar(\n);
}
