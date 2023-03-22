#include "main.h"
/**
 * _islower - checks if it is lower case
 *
 * @c: parameter to be printed
 *
 * Return: 1 if lower case else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
