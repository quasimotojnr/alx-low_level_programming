#include <stdio.h>

/**
 * times_table - Prints time table
 *
 * Return: Void
 */
void times_table(void)
{
	int a = 0, b = 0, c = 0, d = 0;
	int e = 0, f = 0, g = 0, h = 0;
	int i = 0, j = 0;
	int times1 = 0, times2 = 0;
	int times3 = 0, times4 = 0;
	int times5 = 0, times6 = 0;
	int times7 = 0, times8 = 0;
	int times9 = 0;

	while (a < 9)
	{
		printf("0,  ");
		a++;
	}
	printf("0");
	printf("\n");

	while (b < 9)
	{
		printf("%d,  ", times1);
		times1++;
		b++;
	}
	printf("9");
	printf("\n");

	printf("0,");
	while (c < 9)
	{
		if (10 > times2 > 0 & times2 !=0)
		{
			printf("  %d,", times2);
        	}
        	else if (times2 > 9)
        	{
            		printf(" %d,", times2);
        	}
		times2 = times2 + 2;
		c++;
	}
	printf(" 18");
	printf("\n");

	printf("0,");
	while (d < 9)
	{
		if (10 > times3 > 0 & times3 !=0)
		{
			printf("  %d,", times3);
		}
		else if (times3 > 9)
		{
			printf(" %d,", times3);
		}
		times3 = times3 + 3;
		d++;
	}
	printf(" 27");
	printf("\n");

	printf("0,");
	while (e < 9)
	{
		if (10 > times4 > 0 & times4 !=0)
		{
			printf("  %d,", times4);
		}
		else if (times4 > 9)
		{
			printf(" %d,", times4);
		}
		times4 = times4 + 4;
		e++;
	}
	printf(" 36");
	printf("\n");

	printf("0,");
	while (f < 9)
	{
		if (10 > times5 > 0 & times5 !=0)
		{
			printf("  %d,", times5);
		}
		else if (times5 > 9)
		{
			printf(" %d,", times5);
		}
		times5 = times5 + 5;
		f++;
	}
	printf(" 45");
	printf("\n");

	printf("0,");
	while (g < 9)
	{
		if (10 > times6 > 0 & times6 !=0)
		{
			printf("  %d,", times6);
		}
		else if (times6 > 9)
		{
			printf(" %d,", times6);
		}
		times6 = times6 + 6;
		g++;
	}
    	printf(" 54");
	printf("\n");

	printf("0,");
	while (h < 9)
	{
		if (10 > times7 > 0 & times7 !=0)
		{
			printf("  %d,", times7);
		}
		else if (times7 > 9)
		{
		printf(" %d,", times7);
		}
		times7 = times7 + 7;
		h++;
	}
	printf(" 63");
	printf("\n");

	printf("0,");
	while (i < 9)
	{
		if (10 > times8 > 0 & times8 !=0)
		{
			printf("  %d,", times8);
		}
		else if (times8 > 9)
		{
			printf(" %d,", times8);
		}
		times8 = times8 + 8;
		i++;
	}
	printf(" 72");
	printf("\n");

	printf("0,");
	while (j < 9)
	{
		if (10 > times9 > 0 & times9 !=0)
		{
			printf("  %d,", times9);
		}
		else if (times9 > 9)
		{
			printf(" %d,", times9);
		}
		times9 = times9 + 9;
		j++;
	}
	printf(" 81");
	printf("\n");
}   

