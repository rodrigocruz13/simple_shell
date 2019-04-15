#include "holberton.h"
/**
  * get_tokens - tokenizes user input
  * @parsed_input: input to tokenize
  * Return: tokenized input
  */
char **get_tokens(char *parsed_input)
{
	int bufsize = 10000;
	int i = 0;
	char **my_tokens = malloc(sizeof(char *) * bufsize);
	char *token;

	if (my_tokens == NULL)
		exit(EXIT_FAILURE);

	token = strtok(parsed_input, INPUT_TOK_DELIMS);
	while (token != NULL)
	{
		my_tokens[i] = token;
		i++;
		token = strtok(NULL, INPUT_TOK_DELIMS);
	}

	my_tokens[i] = NULL;
	return (my_tokens);

}
