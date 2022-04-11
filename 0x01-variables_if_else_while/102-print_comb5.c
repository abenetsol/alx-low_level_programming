#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int pre;
int post;

for (pre = 0; pre <= 98; pre++)
{
for (post = pre + 1; post <= 99; post++)
{
putchar((pre / 10) + '0');
putchar((pre % 10) + '0');
putchar(' ');
putchar((post / 10) + '0');
putchar((post % 10) + '0');

if (pre == 98 && post == 99)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');
return(0);
}
