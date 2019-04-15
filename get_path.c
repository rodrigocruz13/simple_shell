#include "holberton.h"
/**
  * get_path - parses program path
  * @parsed_input: current path
  * Return: tokenized path
  */
char **get_path(char *parsed_input)
{
	int bufsize = 100;
	int i = 0;
	char **my_tokens = malloc(sizeof(char *) * bufsize);
	char *token;

	if (my_tokens == NULL)
		exit(EXIT_FAILURE);

	token = strtok(parsed_input, PATH_TOK_DELIMS);
	while (token != NULL)
	{
		my_tokens[i] = token;
		i++;
		token = strtok(NULL, PATH_TOK_DELIMS);
	}

	my_tokens[i] = NULL;
	return (my_tokens);

}
