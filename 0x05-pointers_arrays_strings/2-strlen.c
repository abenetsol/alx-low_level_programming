#include "main.h"
/**
 *int _strlen(char *s) - prints length of a string
 *@s: pointer to an int
 *
 *Return: void that means our answer is correct
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
