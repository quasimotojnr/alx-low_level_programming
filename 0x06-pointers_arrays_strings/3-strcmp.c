#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Compares two strings
 * @s1: First string argument
 * @s2: Second string arguments
 *
 * Return: 0 or non zero integer
 */
int _strcmp(char *s1, char *s2)
{
	int index;
	int len;
	int res;

	len = strlen(s1);
	index = 0;
	res = 0;

	while (index < len + 1)
	{
		if (s1[index] == s2[index])
		{
			index++;
			continue;
		}
		else if (s1[index] < s2[index])
		{
			res = res - 15;
			index++;
			break;
		}
		else if (s1[index] > s2[index])
		{
			res = res + 15;
			index++;
			break;
		}
	}
	return (res);
}
