#include <stdio.h>

/**
 * _strncat - Concatinates two strings together
 * @dest: Destination string were source string is to be concatinated
 * @src: Source string containing characters to be concatinated
 * @n: Number of characters to be concatinated
 *
 * Return: New Concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int iS;
	int iD;

	iS = 0, iD = 0;
	while (src[iS] != '\0' && iS < n)
	{
		if (dest[iD] != '\0')
		{
			iD++;
		}
		else
		{
			dest[iD] = src[iS];
			iS++;
			iD++;
		}
	}
	dest[iD] = '\0';
	return (dest);
}
