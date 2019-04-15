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
/**
  * _put_error - prints an error message
  * @tokens: command that is an error
  */
void _put_error(char **tokens)
{
	char *args = HSH_ARGV_ZERO;
	char *tok = tokens[0];
	char nf[] = ": not found\n";

	_put_string(args);
	_putchar(':');
	_putchar(' ');
	_put_string(tok);
	_put_string(nf);

}

/**
  * execute_cmd - executes commands sent by user
  * @tokens: commands and arguments to execute
  * Return: -1 on error
  */
int execute_cmd(char **tokens)
{
	char **path = get_path(getenv("PATH"));
	unsigned int i = 0;
	struct stat st;
	char buf[100];
	char *new_path = buf;
	char buffer[100];
	char *current_path = getcwd(buffer, 100);


	if (tokens[0][0] == '/')
		execve(tokens[0], tokens, SHELL_ENV_VARS);

	while (path[i] != NULL)
	{
		chdir(path[i]);

		if (stat(tokens[0], &st) == 0)
		{
			new_path = path[i];
			_strcat(new_path, "/");
			_strcat(new_path, tokens[0]);
			tokens[0] = new_path;
			chdir(current_path);
			free(path);
			execve(tokens[0], tokens, SHELL_ENV_VARS);
		}

		i++;

	}
	_put_error(tokens);
	exit(EXIT_SUCCESS);
}
