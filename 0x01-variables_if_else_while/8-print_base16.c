#include <stdio.h>

/**
 * main - While loop printing all characters in
 * found in base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;
	int ascii = 0;
	char alpha = 'a';
	int asciiAlpha = 0;

	while (ascii < 10)
	{
		putchar(num);
		num++;
		ascii++;
	}

	while (asciiAlpha < 6)
	{
		putchar(alpha);
		alpha++;
		asciiAlpha++;
	}
	putchar('\n');
	return (0);
}
