#include <stdio.h>

/**
 * _strcat - Concatinates two strings together
 * @dest: Destination string were source string is to be concatinated
 * @src: Source string containing characters to be concatinated
 *
 * Return: New concatinated string
 */
char *_strcat(char *dest, char *src)
{
	int iS;
	int iD;

	iS = 0, iD = 0;
	while (src[iS] != '\0')
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
