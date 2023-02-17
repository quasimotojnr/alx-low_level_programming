#include <stdio.h>

/**
 * main - Programme for printing upper and
 * lower case letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';
	char alphaUpper = 'A';
	int ascii = 97;
	int asciiUpper = 97;

	while (ascii < 123)
	{
		putchar(alpha);
		alpha++;
		ascii++;
	}

	while (asciiUpper < 123)
	{
		putchar(alphaUpper);
		alphaUpper++;
		asciiUpper++;
	}
	putchar ('\n');
	return (0);
}
