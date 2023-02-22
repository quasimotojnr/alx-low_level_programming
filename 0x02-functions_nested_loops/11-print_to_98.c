#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from
 * n to 98
 * @n: Single integer input
 *
 * Return: Void
 */
void print_to_98(int n)
{
	int count;
	int num;

	count = n;
	num = n;

	if (n < 98)
	{
		while (count < 98)
		{
			printf("%d, ", num);
			count++;
			num++;
		}
		printf("98\n");
	}
	else
	{
		while (count > 98)
		{
			printf("%d, ", num);
			count--;
			num--;
		}
		printf("98\n");
	}
}
