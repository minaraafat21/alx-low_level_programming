#include "main.h"
/**
 * _isalpha - checks if c is alphabetic
 *
 * @c: parameter
 *
 * Return: 1 if alphabetic
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
