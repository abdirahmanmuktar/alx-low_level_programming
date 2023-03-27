#include "main.h"
/**
 * _puts - print a string, followed by anew line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
		str++;
	{
_putchar(*str++);
	}
	_putchar('\n');
}
