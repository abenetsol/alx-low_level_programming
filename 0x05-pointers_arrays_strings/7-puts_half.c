#include "main.h"
/**
 *put_half - print second half of the string
 *@str: pointer that value changes
 *
 *Return: void meaning correct output
 */
void put_half(char *str)
{
int i, last;

i = 0;
while (str[i] != '\0')
{
i++;
}
last = (i + 1) / 2;

for (i = last; str[i]; i++)
{
_putchar(str[i]);
}

_putchar ('\n');

}
