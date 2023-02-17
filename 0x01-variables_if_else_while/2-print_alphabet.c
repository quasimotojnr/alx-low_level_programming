#include <stdio.h>

/**
 * main - Programme for printing alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	int ascii;
	alpha = 'a';
	ascii = 97;

	while (ascii < 123)
	{
		putchar(alpha);
		alpha++;
		ascii++;
	}
	putchar('\n');

	return (0);
}
