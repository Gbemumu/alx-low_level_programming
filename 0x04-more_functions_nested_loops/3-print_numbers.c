#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * @i: int
 *
 * Return: Always 0
 */
void print_numbers(void)
{

	int i;

	for (i = 0; i < 10; i++)
		_putchar(i);

	_putchar(0);
}