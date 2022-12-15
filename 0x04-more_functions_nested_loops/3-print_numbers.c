#include "main.h"

/**
 * print_numbers - prints all numbers from 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int number = 0;

	while (number < 10)
	{
		_putchar(number + '0');
		number++;
	}
	_putchar('\n');
}
