#include <stdio.h>
#include <string.h>

/**
 * _puts - Prints given string to standard output
 * @str: String argument
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int length;
	int index;

	length = strlen(str);
	index = 0;

	while (index < length)
	{
		_putchar(str[index]);
		index++;
	}
	putchar(32);
}
