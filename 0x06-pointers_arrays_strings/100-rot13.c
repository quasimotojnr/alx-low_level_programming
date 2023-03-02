#include <stdio.h>

/**
 * rot13 - Encrypts a given string using rot13
 * @str: String to be encrypted
 *
 * Return: New encrypted string
 */
char *rot13(char *str)
{
	int index, i;
	char alp[] = {"abcdefghijklmnopqrstuvwxyz"};
	char num[] = {"nopqrstuvwxyzabcdefghijklm"};

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
