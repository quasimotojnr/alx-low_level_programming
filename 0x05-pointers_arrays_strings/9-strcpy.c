#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - Copies the array values from one array to another
 * @dest: Destination array argument
 * @src: Source array argument
 *
 * Return: Array of copied characters
 */
char *_strcpy(char *dest, char *src)
{
	int index;
	int length;

	index = 0;
	length = strlen(src);

	while (index < length)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
