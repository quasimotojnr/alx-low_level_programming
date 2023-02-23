#include <stdio.h>

/**
 * more_numbers - Fuction for printing numbers 0 to 14 10x
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int num = 48;
	int ascii = 0;
	int count = 0;

	while (count < 10)
	{
		while (ascii < 15)
		{
			if (ascii < 10)
			{
				putchar(num);
				num++;
			}
			else
			{
				putchar('1');
				putchar(num);
				num++;
			}
			ascii++;
		}
		putchar('\n');
		count++;
	}
}

