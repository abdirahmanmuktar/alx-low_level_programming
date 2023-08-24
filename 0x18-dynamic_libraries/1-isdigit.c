#include "main.h"
/**
 * _isdigit - check if the character is a digit
 * @c: the number to be checked
 * Return: 1 for a character that is a digit or 0 for others
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
