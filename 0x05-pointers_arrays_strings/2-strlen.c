#include "main.h"
/**
 * _strlen - function
 *
 * @s: parameter
 *
 * Return: void
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0 ; *s != '\0' ; s++)
	{
		++counter;
	}

	return (counter);
}
