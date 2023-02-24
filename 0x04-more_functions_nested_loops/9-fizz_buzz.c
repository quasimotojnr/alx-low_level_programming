#include <stdio.h>

/**
 * main - Programme for all numbers from 1 to 100 with
 * fizz in place of multiples of 3 buzz in place of multiples
 * of 5 and fizzBuzz in place of multiples of bothn 3 and 5
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	int num;

	num = 1;
	count = 0;

	while (count < 100)
	{
		if (num % 3 == 0 & num % 5 == 0)
		{
			printf("FizzBuzz ");
			num++;
			count++;
			continue;
		}
		else if (num % 3 == 0)
		{
			printf("fizz ");
			num++;
			count++;
			continue;
		}
		else if (num % 5 == 0)
		{
			printf("buzz ");
			num++;
			count++;
			continue;
		}
		else
		{
			printf("%d ", num);
			count++;
			num++;
		}
	}
	return (0);
}
