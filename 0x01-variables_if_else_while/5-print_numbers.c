#include <stdio.h>

/**
 * main - While loop for printing numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	int ascii = 0;

	while (ascii < 10)
	{
		putchar(num);
		num++;
		ascii++;
	}
	putchar('\n');
	return (0);
}
