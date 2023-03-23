#include "main.h"
/**
 * positive_or_negative - main function
 *@n: parameter
 * Return: always 0
 */

void positive_or_negative(int n)
{

	if (n > 0)
	{ printf("%d is positive", n);
	}
	else if (n == 0)
	{ printf("%d is zero", n);
	}
	else
	{ printf("%d is negative", n);
	}
	printf("\n");
}
