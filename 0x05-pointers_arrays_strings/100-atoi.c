#include <stdio.h>

/**
 * _atoi - Converts a string containing numbers into an integer
 * @s: Sring arguments containing numbers
 *
 * Return: The number as integer
 */
int _atoi(char *s)
{
	int index, num, negSignCount, res;

	negSignCount = 0;
	index = 0, res = 0;
	while (s[index] != '\0')
	{
		if (s[index] == 45)
		{
			negSignCount++;
			index++;
			continue;
		}
		if (s[index] < 48 || s[index] > 57)
		{
			index++;
			continue;
		}
		if (s[index] > 47 || s[index] < 58)
		{
			res = (res * 10) + (s[index] - '0');
			index++;
			continue;
		}
	}
	if (negSignCount % 2 == 1)
	{
		return (0 - res);
	}
	else
	{
		return (res);
	}
}
