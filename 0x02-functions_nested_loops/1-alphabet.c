#include <stdio.h>
#include "main.h"

/**
 * print_alphabet(void) - function for printing alphabets.
 *
 * Return: Always void.
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
