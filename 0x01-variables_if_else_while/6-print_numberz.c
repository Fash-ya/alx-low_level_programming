#include <stdio.h>
/**
 * main - Print all single digit numbers of base 10 to 0 using putchar
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
