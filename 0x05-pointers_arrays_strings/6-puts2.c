#include "main.h"
/**
 *puts2 - prints every other charcater
 *@str: Point that value changes
 *
 *Return: void meaning result is right
 */

void puts2(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
_putchar (str[a]);
}

_putchar ('\n');
}
