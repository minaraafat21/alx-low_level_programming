#include "main.h"
		
#include <stdlib.h>
		
/**
		
 * create_array - create array of size size and assign char c
		
 * @size: parameter
		
 * @c: parameter
		
 * Return: pointer to array
		
 *
		
 */
		
char *create_array(unsigned int size, char c)
		
{
		
	char *str;
		
	unsigned int i;

	str = malloc(sizeof(char) * size);
		
	if (size == 0)
		
		return (NULL);
		

		
	for (i = 0; i < size; i++)
		
		str[i] = c;
		
	return (str);
		
}