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

	printf("Size of a char : %zu byte(s)\n" size_t(charSize));
	printf("Size of an int : %zu byte(s)\n" size_t(intSize));
	printf("Size of a long int : %zu byte(s)\n" size_t(longIntSize));
	printf("Size of a long long int : %zu byte(s)\n" size_t(longLongIntSize));
	printf("Size of a float : %zu byte(s)\n" size_t(floatSize));

	return (0);
}
