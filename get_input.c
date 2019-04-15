#include "holberton.h"
/**
  * get_input - gets input from user
  * Return: pointer to null terminated string with user input
  */
char *get_input(void)
{
	char *input = NULL;
	size_t bufsize = 0;
	int status;

	status = getline(&input, &bufsize, stdin);
	if (status == -1)
	{
		if (input[0] == EOF)
			printf("EOF\n");

		exit(0);
	}
	return (input);
}
