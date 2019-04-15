#include "holberton.h"
/**
  * create_fork - creates a child process to execute commands
  * @tokens: tokens to execut
  * Return: 1 on success
  */
int create_fork(char **tokens)
{
	pid_t pid;
	int status = 1;

	pid = fork();
	if (pid == 0)
	{
		execute_cmd(tokens);
	}
	else if (pid < 0)
	{
		perror("error forking");
	}
	else
	{
			wait(&status);
	}
	return (1);
}
