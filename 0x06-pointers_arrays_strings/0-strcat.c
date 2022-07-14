# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define MAXSTRING 80
/**
 * _strcat - Function to concatenate two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	{
		for (count = 0; count < MAXSTRING; count++)
			if (dest[count] == '\0' || src[count] == '\0')
			{
				putchar(' ');
				break;
			}
			else
			{
				putchar(dest[count]);
				putchar(src[count]);
			}
	}
}
