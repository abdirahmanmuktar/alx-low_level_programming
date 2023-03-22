#include "main.h"
/**
 * print_alphabet_x10 - make alphabet x10 times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 'a'; i <= 'z'; j++)

		{
		_putchar(j);
		}

		_putchar('\n');
		i++;
	}
}
