#include "holberton.h"

/**
  * put_prompt - prints prompt "$ " to terminal
  */
void put_prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('$');
		_putchar(' ');
	}
}
