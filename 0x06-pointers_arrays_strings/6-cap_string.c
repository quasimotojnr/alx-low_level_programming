#include <stdio.h>

/**
 * cap_string - Capitalizes the first letter of every word in given string
 * @str: String to be edited
 *
 * Return: New edited string
 */
char *cap_string(char *str)
{
	int index;
	char upper, pCh;

	index = 0;
	while (str[index] != '\0')
	{
		upper = str[index] - 32;
		pCh = str[index - 1];
		if (str[index] < 97 || str[index] > 122)
		{
			index++;
			continue;
		}
		if (pCh == 32 || pCh == 44 || pCh == 46 || pCh == 10 || pCh == 9)
		{
			str[index] = upper;
			index++;
			continue;
		}
		else if (pCh == 59 || pCh == 34 || pCh == 33 || pCh == 63)
		{
			str[index] = upper;
			index++;
			continue;
		}
		else if (pCh == 40 || pCh == 41 || pCh == 123 || pCh == 125)
		{
			str[index] = upper;
			index++;
			continue;
		}
		else
		{
			index++;
			continue;
		}
	}
	return (str);
}
