#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int ascii;
	int count = 0;

	while (count < 10)
	{
		alpha = 'a';
		ascii = 97;
		while (ascii < 123)
		{
			putchar(alpha);
			alpha++;
			ascii++;
		}
		putchar('\n');
		count++;
	}
}
