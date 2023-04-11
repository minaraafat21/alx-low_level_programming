#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory location
 * @str: parameter
 * Return: always 0
 */
char *_strdup(char *str)
{
	char *adress;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	adress = malloc(sizeof(char) * (i + 1));
	if (adress == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		adress[r] = str[r];
	return (adress);
}

