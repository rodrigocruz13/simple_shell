#include "holberton.h"
/**
  * create_loop - waits for input and then sends off for processing
  */
void create_loop(void)
{
	char *input;
	char *parsed_input;
	char **tokens;
	int status = 1;



	while (status == 1)
	{


		/* signal(SIGINT, catch_sig); */


		put_prompt();
		input = get_input();
		parsed_input = get_parsed_input(input);
		tokens = get_tokens(parsed_input);
		/* check_builtins(tokens); */
		status = process_tokens(tokens);

		free(input);
		free(tokens);



	}


}
