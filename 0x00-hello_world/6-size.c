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

	printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(charSize));
	printf("Size of an int : %lu byte(s)\n", (unsigned long)sizeof(intSize));
	printf("Size of a long int : %lu byte(s)\n", (unsigned long)sizeof(longIntSize));
	printf("Size of a long long int : %lu byte(s)\n", (unsigned long)sizeof(longLongIntSize));
	printf("Size of a float : %lu byte(s)\n", (unsigned long)sizeof(floatSize));

	return (0);
}
