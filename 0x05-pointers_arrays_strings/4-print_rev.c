#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints chatacters in reverse to standard output
 * @s: String argument
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int length;
	int index;

	length = strlen(s);
	index = 0;

	while (index < length)
	{
		putchar(s[length - index - 1]);
		index++;
	}
	putchar("\n");
}
