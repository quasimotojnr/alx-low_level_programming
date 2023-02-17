#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Programme to determine if number is positive or negetive
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negetive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
