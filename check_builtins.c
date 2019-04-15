#include "holberton.h"
/**
  * check_builtins - checks if a command is a builtin
  * @tokens: tokens to check for builtins
  */
void check_builtins(char **tokens)
{
	if (strcmp(tokens[0], "exit") == 0)
	{
		printf("Exit found\n");

		free(tokens);
		exit(0);
	}

}
