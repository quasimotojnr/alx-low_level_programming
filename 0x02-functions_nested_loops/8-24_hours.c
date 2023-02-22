#include <stdio.h>

/**
 * jack_bauer - Prints all the minutes in a day
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int h;
	int m;
	int minCount;

	minCount = 0;
	while (minCount < 1440)
	{
		h = minCount / 60;
		m = minCount % 60;
		if (h < 10)
		{
			printf("0%d", h);
		}
		else
		{
			printf("%d", h);
		}
		printf(":");
		if (m < 10)
		{
			printf("0%d", m);
		}
		else
		{
			printf("%d", m);
		}
		printf("\n");
		minCount++;
	}
}
