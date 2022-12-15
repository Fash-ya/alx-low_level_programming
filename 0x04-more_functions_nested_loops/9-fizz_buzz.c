#include <stdio.h>
/**
 * main - prints a program from 1 to 100 followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if  (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else if (x % 3 == 0)
		{
			printf("Fizz");
		}

		else if (x % 5 == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%x", x);
		}

		if  (x != 100)
		{
			putchar(' ');
		}

		x++;
	}
	putchar('\n');
	return (0);
}
