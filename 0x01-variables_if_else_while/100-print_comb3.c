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
for (pre = 48; pre <= 57; pre++)
{

for (post = 49; post <= 57; post++)
{
if (post <= pre)
{
continue;
}
else
{
putchar(pre);
putchar(post);
if (pre == 56)
{
break;
}
putchar(',');
putchar(' ');
}
}

}
putchar('\n');

return (0);
}
