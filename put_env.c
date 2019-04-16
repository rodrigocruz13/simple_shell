#include "holberton.h"
/**
  * put_env - prints environment variables to stdout
  */
void put_env(void)
{
	int i = 0;

	for (i = 0; SHELL_ENV_VARS[i] != '\0'; i++)
	{
		_put_string(SHELL_ENV_VARS[i]);
		_putchar('\n');
	}

}
