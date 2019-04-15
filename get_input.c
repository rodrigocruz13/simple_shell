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
	if (status == EOF)
	{
		if (isatty(STDIN_FILENO))
		{
			_putchar('\n');
			return (input);
		}
		else
			exit(0);
	}
	return (input);
}
