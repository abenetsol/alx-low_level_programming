#include "main.h"
/**
 *_puts - prints string followed by new line
 *@str: pointer to an int that will be changed
 *
 *Return: vovidd which means our answer is correct
 */

void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
_putchar(c[m]);
}
_putcchar('\n');
}
