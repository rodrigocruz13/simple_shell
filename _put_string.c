#include "holberton.h"
/**
 * _put_string - prints a string
 * @str: string to print
 */
void _put_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
