#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - Checks if character is a digit
 * @c: Single argument
 *
 * Return: 1 if true 0 if false
 */
int _isdigit(int c)
{
	int ret;

	ret = isdigit(c);

	if (ret > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
