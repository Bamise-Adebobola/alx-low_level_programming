# include <stdio.h>
# include <string.h>
# include "main.h"
/**
 * _strlen - This function prints how many characters are in a string.
 * @s: Parameter for char
 * Return: void.
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	for (int i = 0; i < strlen(*s); i++)
		count++;
	return (count);
}

