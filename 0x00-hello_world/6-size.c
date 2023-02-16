#include <stdio.h>

/**
 * main - Programme to print size of different data types
 * to standard output
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int intSize;
	char charSize;
	long int longIntSize;
	long long int longLongIntSize;
	float floatSize;

	printf("Size of a char : %zu byte(s)\n" sizeof(charSize));
	printf("Size of an int : %zu byte(s)\n" sizeof(intSize));
	printf("Size of a long int : %zu byte(s)\n" sizeof(longIntSize));
	printf("Size of a long long int : %zu byte(s)\n" sizeof(longLongIntSize));
	printf("Size of a float : %zu byte(s)\n" sizeof(floatSize));

	return (0);
}
