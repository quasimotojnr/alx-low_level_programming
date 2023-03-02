#include <stdio.h>

/**
 * _strncpy - Copies a string to another string
 * @dest: Destination of copied string
 * @src: String to be copied
 * @n: Number of characters to be copied
 *
 * Return: New string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;
	char newChar;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		newChar = src[index];
		dest[index] = newChar;
		index++;
	}
	return (dest);
}
