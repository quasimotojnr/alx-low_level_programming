#include <stdio.h>

/**
 * main - While loop for printing a - z
 * excluding certain characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	int ascii = 97;

	while (ascii < 123)
	{
		putchar(alpha);
		if (ascii = 101)
		continue;
		if (ascii = 113)
		continue;
		alpha++;
		ascii++;
	}
	putchar('\n');

	return (0);
}
