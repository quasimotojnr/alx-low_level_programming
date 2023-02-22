#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';
	int ascii = 97;

	while (ascii < 123)
	{
		putchar(alpha);
		alpha++;
		ascii++;
	}
	putchar('\n');
}
