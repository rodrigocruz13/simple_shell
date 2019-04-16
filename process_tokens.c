#include "holberton.h"
/**
  * process_tokens - checks for builtins and null commands
  * @tokens: tokenized user input
  * Return: status of forking process
  */
int process_tokens(char **tokens)
{
	int status = 0;
	char *b_exit = "exit";
	char *b_env = "env";

	if (tokens[0] == NULL)
		return (1);
	if (_strcmp(tokens[0], b_exit) == 0)
		return (0);
	if (_strcmp(tokens[0], b_env) == 0)
	{
		put_env();
		return (1);
	}
	status = create_fork(tokens);

	return (status);
}
