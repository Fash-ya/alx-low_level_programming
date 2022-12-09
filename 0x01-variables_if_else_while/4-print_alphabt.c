#include <stdio.h>
/**
 * main - print all the alphabets in lowercase except q and e
 *
 *  Return: Always 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
			putchar(alphabets);
	}

	putchar('\n');

	return (0);
}
