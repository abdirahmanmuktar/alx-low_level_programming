#include <stdio.h>
#include <unistd.h>
/**
 * main - A simplicity
 *
 * Return: 1 (Success)
 */
int main(void)
{
char s[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(s, sizeof(s), 1, stderr);
return (1);
}
