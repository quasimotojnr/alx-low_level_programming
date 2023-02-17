#include <stdio.h>

/**
 * main - Programm printing all combination of single
 * digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;
	int ascii = 0;

	while (ascii < 10)
	{
		putchar(num);
		num++;
		ascii++;
		if (ascii == 10)
		break;
		putchar(44);
		putchar(' ');
	}
	return (0);
}
