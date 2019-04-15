# include "holberton.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: string to concatenate to
 * @src: string to concatenate to other string
 *
 * Return: a pointer to resulting string dest
 **/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
