#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	int msg;

	for (msg = 0; *(str + msg) != '\0'; msg++)
	{
		_putchar(str[msg]);
	}
	_putchar('\n');
}
