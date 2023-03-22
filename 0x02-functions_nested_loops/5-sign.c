#include "main.h"
/**
 * print_sign - function prints sign
 *
 *
 *@n: parameter is n
 *
 *Return: 1 if pos -1 if neg 0 if 0
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		r = -1;
	}
	return (r);
}
