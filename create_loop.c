#include "holberton.h"
/**
  * create_loop - waits for input and then sends off for processing
  */
void create_loop(void)
{
	char *input = NULL;
	char *parsed_input = NULL;
	char **tokens = NULL;
	int status = 0;


	while (1)
	{


		put_prompt();
		input = get_input();
		parsed_input = get_parsed_input(input);
		tokens = get_tokens(parsed_input);
		status = process_tokens(tokens, status);

		free(input);
		free(tokens);

		HSH_LOOP_COUNT++;
	}


}
