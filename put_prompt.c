#include "holberton.h"

/**
  * put_prompt - prints prompt "$ " to terminal
  */
void put_prompt(void)
{
	if (isatty(fileno(stdin)))
	{
		_putchar('$');
		_putchar(' ');
	}
}
