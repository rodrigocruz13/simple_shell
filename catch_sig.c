#include "holberton.h"
/**
  * catch_sig - handles SIGINT signals
  * @s: signal to catch
  */
void catch_sig(int s)
{
	if (signal(SIGINT, SIG_IGN) == SIG_ERR)
		printf("Error catching signal: %i\n", s);
}
