#include "main.h"
/**
 * _strlen_recursion - my_func
 *
 * @s: parameter
 *
 * Return: int length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != 0)
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}

	return (length);
}
