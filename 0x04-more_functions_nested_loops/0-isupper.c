#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Function to check if alphabet is upper case
 * @c:  First operand
 *
 * Return: 1 if true and 0 if false
 */
int _isupper(int c)
{
	char a;
	int ret;

	a = c;
	ret = isupper(a);
	if (ret > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
