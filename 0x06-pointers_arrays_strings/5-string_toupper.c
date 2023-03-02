#include <stdio.h>
#include <string.h>

/**
 * string_toupper - Converts all lowercase letters in given string to uppercase
 * @str: String to be edited
 *
 * Return: New edited string
 */
char *string_toupper(char *str)
{
	int index;
	char upper;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == 32)
		{
			index++;
			continue;
		}
		else if (str[index] < 97 || str[index] > 122)
		{
			index++;
			continue;
		}
		upper = str[index] - 32;
		str[index] = upper;
		index++;
	}
	return (str);
}
