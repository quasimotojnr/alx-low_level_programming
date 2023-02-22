#include <stdio.h>
#include <ctype.h>

/**
 * _islower - Checks alphsbet character case
 * @c:  First operand
 *
 * Return: 1 if true and 0 if false
 */
int _islower(int c)
{
	char a;
	int ret;

	a = c;
	ret = islower(a);
	if (ret > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
