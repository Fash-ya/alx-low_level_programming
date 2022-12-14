#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	long int a = 0, b = 1, c;

	for (i = 1; i <= 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);

		if (i <= 49)
			printf(", ");
	}
	printf("\n");

	return (0);
}
