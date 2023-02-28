#include <stdio.h>

/**
 * _strlen - Counts the number of characters in a string
 * @s: String argument
 *
 * Return: Lenght of string
 */
int _strlen(char *s)
{
	int length;
	int index;
	int finalLenght;

	index = 0;
	length = 0;

	while (s[index] != '\0')
	{
		index++;
		length++;
	}
	finalLenght = length;
	return (finalLenght);
}
