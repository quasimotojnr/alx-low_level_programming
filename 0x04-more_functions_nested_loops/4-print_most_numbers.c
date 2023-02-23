#include <stdio.h>

/**
 * print_most_numbers - Functions for printing numbers
 * 0 to 9 except 2 and 4
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int num = 48;
	int ascii = 0;

	while (ascii < 10)
	{
		if (ascii == 2 || ascii == 4)
		{
			num++;
			ascii++;
			continue;
		}
		putchar(num);
		num++;
		ascii++;
	}
	putchar('\n');
}

