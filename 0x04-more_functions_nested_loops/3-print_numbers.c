#include "main.h"
/**
 *print number - prints number 0 - 9 followed by a new line
 *Return: Always 0.
 */
void print_numbers(void)
{
int i;
while(i < 10)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
