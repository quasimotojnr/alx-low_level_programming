#include <stdio.h>
#include <string.h>

/**
 * puts2 - Prints every other character in a string to standard output
 * @str: String argument
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int length;
	int index;

	length = strlen(str);
	index = 0;

	while (index < length)
	{
		putchar(str[index]);
		index = index + 2;
	}
}
