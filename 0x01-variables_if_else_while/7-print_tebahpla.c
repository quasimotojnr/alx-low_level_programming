#include <stdio.h>

/**
 * main - While loop printing alphabets
 * from z - a
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
		alpha--;
		ascii++;
	}
	putchar('\n');
	return (0);
}
