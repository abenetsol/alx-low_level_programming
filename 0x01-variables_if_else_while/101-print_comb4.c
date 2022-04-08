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
int third;
for (pre = 48; pre <= 57; pre++)
{

for (post = 49; post <= 57; post++)
{
for (third = 50; third <= 57; third++)
{

if (post <= pre || third <= post)
{
continue;
}
else
{
putchar(pre);
putchar(post);
putchar(third);
putchar(',');
putchar(' ');
}
}
}

}

putchar('\n');

return (0);
}
