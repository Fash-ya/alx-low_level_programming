#include <stdio.h>
/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{

	int num;
	char alphabets;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
