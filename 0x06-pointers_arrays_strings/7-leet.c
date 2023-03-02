#include <stdio.h>

/**
 * leet - Encodes the given string into 1337
 * @str: String to be encoded
 *
 * Return: New edited string
 */
char *leet(char *str)
{
	int index, i;
	char alp[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};

	index = 0;
	while (str[index] != '\0')
	{
		i = 0;
		while (alp[i] != '\0')
		{
			if (alp[i] == str[index] || alp[i] - 32 == str[index])
			{
				str[index] = num[i];
				break;
			}
			i++;
		}
		index++;
	}
	return (str);
}
