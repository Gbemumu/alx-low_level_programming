#include "main.h"
#include <unistd.h>
/**
 * main - prints _putchar
 *
 * Return: 0
 *
 */
int _putchar(char c)
{
    return write(1, &c, 1); // Use the write function to print the character.
}

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return(0);
}
