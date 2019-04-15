#include <stdio.h>
#include "holberton.h"
/**
 * _strcmp - Copy a string.
 *
 * @s1: destination string
 * @s2: source string
 * Return: 1 in case of sucess
 */
int _strcmp(char *s1, char *s2)
{
	int i, dif, tam_dest, tam_src;

	for (tam_dest = 0 ; s1[tam_dest] != '\0' ; tam_dest++)
	{} /* Calculates the size of the destination string */
	for (tam_src = 0 ; s2[tam_src] != '\0' ; tam_src++)
	{} /* Calculates the size of the source string */
	dif = 0;
	for (i = 0 ; i < tam_src && s1[i] == s2[i] ; i++)
	{}
	dif = s1[i] - s2[i];
	return (dif);
}
