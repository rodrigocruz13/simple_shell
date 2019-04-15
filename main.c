#include "holberton.h"
/**
  * main - entry point for shell
  * @ac: count of arguments to main
  * @av: argument list to main
  * @env: environment of main
  * Return: 0 on success
  */
int main(int ac, char **av, char **env)
{
	if (ac > 1)
		exit(0);

	signal(SIGINT, catch_sig);
	HSH_ARGV_ZERO = av[0];

	SHELL_ENV_VARS = env;

	create_loop();

	return (EXIT_SUCCESS);
}
