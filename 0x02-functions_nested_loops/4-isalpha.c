#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - Checks if character is an alphabet
 * @c: Single argument
 *
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	int ret;

	ret = isalpha(c);

	if (ret > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

