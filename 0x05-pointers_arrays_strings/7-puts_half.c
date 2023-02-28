#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints half of the given string argument to standard
 * output
 * @str: String argument
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int length;
	int index;

	length = strlen(str);
	if (length % 2 == 0)
	{
		index = length / 2;
	}
	else
	{
		index = (length / 2) + 1;
	}
	while (index < length)
	{
		putchar(str[index]);
		index++;
	}
	putchar("\n");
}
