#include "main.h"

/**
 * _isupper - check char for an uppercase
 *
 * @c: char to check
 *
 * Return: 1 if c is uppercase
 *         0 otherwise
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
