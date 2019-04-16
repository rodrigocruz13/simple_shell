#include "holberton.h"
/**
  * create_fork - creates a child process to execute commands
  * @tokens: tokens to execut
  * Return: 1 on success
  */
int create_fork(char **tokens)
{
	pid_t pid;
	int status = 0;

	pid = fork();
	if (pid == 0)
	{
		status = execute_cmd(tokens);
	}
	else if (pid < 0)
	{
		perror("error forking");
	}
	else
	{
			waitpid(pid, &status, 0);

			if (WIFEXITED(status))
			{
				status = WEXITSTATUS(status);
			}

	}
	return (status);
}
