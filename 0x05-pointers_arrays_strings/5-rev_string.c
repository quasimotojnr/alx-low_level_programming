#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses string argument
 * @s: String argument
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int length;
	int index;
	char initChar;
	int midpoint;
	char oppChar;

	length = strlen(s);
	midpoint = length / 2;
	index = 0;

	while (index < midpoint)
	}
		oppChar = s[length - index - 1];
		initChar = s[index];
		s[index] = oppChar;
		s[length - index - 1] = initChar;
		index++;
	}
}
