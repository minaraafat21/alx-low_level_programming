#include "main.h"
/**
 * print_last_digit - prints the last digit
 *
 * @a: parameter
 *
 * Return: returns last digit
 */
int print_last_digit(int a)
{
	int r;

	r = a % 10;
	if (a < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
