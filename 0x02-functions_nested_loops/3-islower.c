#include "main.h"
/**
 * _islower - Checks if char is lowercase or not
 *
 * @c - Character to be checked
 *
 * Return: 1 if char is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
